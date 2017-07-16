#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{

    "/sys/class/graphics/fb0",
    "/sys/class/graphics/fb1",
    "/sys/devices/virtual/graphics/fb0",
    "/sys/devices/virtual/graphics/fb1",

    "/sys/bus/platform/drivers/i2c-msm-v2",

    "/sys/devices/soc/1da4000.ufshc*",
    "/sys/devices/soc/1da4000.ufshc/host0*",
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:4/block/sda*",
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:4/block/sde*",

    // boot and data
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:4/block/sde/sde19", //boot
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:0/block/sda/sda13", //data
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:4/block/sde/sde22", //recovery
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:0/block/sda/sda4", //misc

    // system and cache
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:4/block/sde/sde21", //system
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:0/block/sda/sda3", //cache

    // Mount persist and firmware
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:0/block/sda/sda2", // persist
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:4/block/sde/sde10", // firmware

    // frp
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:0/block/sda/sda6", //frp
    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:0/block/sda/sda12", //config

    "/sys/devices/soc/1da4000.ufshc/host0/target0:0:0/0:0:0:4/block/sde/sde11", // DSP

    "/sys/bus/mmc*",
    "/sys/bus/mmc/drivers/mmcblk",

    // for input
    "/sys/devices/soc/c179000.i2c/i2c-5/5-0020/input*",
    "/sys/devices/soc/c179000.i2c/i2c-5/5-0020/input/input4*",

    // for adb
    "/sys/devices/platform/android_usb*",
    "/sys/bus/usb*",

    // USB Drive
    "/sys/bus/platform/drivers/xhci-hcd*",
    "/sys/block/sdg/sdg1",

    // for qualcomm overlay - /dev/ion
    "/sys/devices/virtual/misc/ion",

    NULL
};
