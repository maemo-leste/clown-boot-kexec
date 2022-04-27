#!/bin/sh

SCRIPT=`realpath $0`
SCRIPTPATH=`dirname $SCRIPT`
OUTDIR=$SCRIPTPATH/modules

mkdir $OUTDIR 2> /dev/null

make ARCH=arm CROSS_COMPILE=$SCRIPTPATH/gcc-linaro-arm-linux-gnueabihf-4.7-2013.03-20130313_linux/bin/arm-linux-gnueabihf- mapphone_kexec_defconfig modules -j4

mv $SCRIPTPATH/arch/arm/kernel/atags.ko $OUTDIR
mv $SCRIPTPATH/arch/arm/kernel/arm_kexec.ko $OUTDIR
mv $SCRIPTPATH/arch/arm/mach-omap2/board-mapphone-emu_uart.ko $OUTDIR
mv $SCRIPTPATH/drivers/staging/android/last_ram_console.ko $OUTDIR
mv $SCRIPTPATH/kernel/kexec.ko $OUTDIR
