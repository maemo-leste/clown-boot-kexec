#ifndef _ARM_KEXEC_H
#define _ARM_KEXEC_H

//#ifdef CONFIG_KEXEC

/* Maximum physical address we can use pages from */
#define KEXEC_SOURCE_MEMORY_LIMIT (-1UL)
/* Maximum address we can reach in physical address mode */
#define KEXEC_DESTINATION_MEMORY_LIMIT (-1UL)
/* Maximum address we can use for the control code buffer */
#define KEXEC_CONTROL_MEMORY_LIMIT (-1UL)

#define KEXEC_CONTROL_PAGE_SIZE	4096

#define KEXEC_ARCH KEXEC_ARCH_ARM

#define KEXEC_ARM_ATAGS_OFFSET  0x1000
#define KEXEC_ARM_ZIMAGE_OFFSET 0x8000

#ifndef __ASSEMBLY__

#define ARCH_HAS_KIMAGE_ARCH
struct kimage_arch {
	u32 kernel_r2;
};


/**
 * crash_setup_regs() - save registers for the panic kernel
 * @newregs: registers are saved here
 * @oldregs: registers to be saved (may be %NULL)
 *
 * Function copies machine registers from @oldregs to @newregs. If @oldregs is
 * %NULL then current registers are stored there.
 */
static inline void crash_setup_regs(struct pt_regs *newregs,
				    struct pt_regs *oldregs)
{
	if (oldregs) {
		memcpy(newregs, oldregs, sizeof(*newregs));
	} else {
		__asm__ __volatile__ (
			"stmia	%[regs_base], {r0-r12}\n\t"
			"mov	%[_ARM_sp], sp\n\t"
			"str	lr, %[_ARM_lr]\n\t"
			"adr	%[_ARM_pc], 1f\n\t"
			"mrs	%[_ARM_cpsr], cpsr\n\t"
		"1:"
			: [_ARM_pc] "=r" (newregs->ARM_pc),
			  [_ARM_cpsr] "=r" (newregs->ARM_cpsr),
			  [_ARM_sp] "=r" (newregs->ARM_sp),
			  [_ARM_lr] "=o" (newregs->ARM_lr)
			: [regs_base] "r" (&newregs->ARM_r0)
			: "memory"
		);
	}
}

/* Function pointer to optional machine-specific reinitialization */
extern void (*kexec_reinit)(void);

#endif /* __ASSEMBLY__ */

//#endif /* CONFIG_KEXEC */

#endif /* _ARM_KEXEC_H */
