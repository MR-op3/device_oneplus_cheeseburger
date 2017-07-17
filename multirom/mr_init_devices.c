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

    "/sys/block/sda*",
    "/sys/block/sde*",

    // boot and data
    "/sys/block/sde/sde19", //boot
    "/sys/block/sda/sda13", //data
    "/sys/block/sde/sde22", //recovery
    "/sys/block/sde/sda4", //misc

    // system and cache
    "/sys/block/sde/sde21", //system
    "/sys/block/sda/sda3", //cache

    // Mount persist and firmware
    "/sys/block/sda/sda2", // persist
    "/sys/block/sde/sde10", // firmware

    // frp
    "/sys/block/sda/sda6", //frp
    "/sys/block/sda/sda12", //config

    "/sys/block/sde/sde11", // DSP

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
