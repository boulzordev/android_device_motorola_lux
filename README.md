#CyanogenMod tree for Moto X Play
* Based off https://github.com/Motorola-CyanogenMod/android_device_motorola_surnia

##Dependencies:
````
sudo apt-get install bison build-essential curl flex git gnupg gperf libesd0-dev liblz4-tool libncurses5-dev libsdl1.2-dev libwxgtk2.8-dev libxml2 libxml2-utils lzop openjdk-6-jdk openjdk-6-jre pngcrush schedtool squashfs-tools xsltproc zip zlib1g-dev
sudo apt-get install g++-multilib gcc-multilib lib32ncurses5-dev lib32readline-gplv2-dev lib32z1-dev schedtool libc6-i386 lib32stdc++6 lib32gcc1 lib32ncurses5 zlib1g lib32z1 lib32bz2-1.0
````
You also need the repo tool for cloning Android source trees.

##Set up and get the repo:
````
repo init -u https://github.com/CyanogenMod/android.git -b cm-12.1
mkdir -p .repo/local_manifests
````

Create a file .repo/local_manifests/lux.xml and paste this in:
````
<?xml version="1.0" encoding="UTF-8"?>
<manifest>
    <project name="boulzordev/android_kernel_motorola_msm8916" path="kernel/motorola/msm8916" remote="github" revision="cm-12.1" />
    <project name="boulzordev/android_vendor_motorola_lux" path="vendor/motorola/lux" remote="github" revision="cm-12.1" />
    <project name="boulzordev/android_device_motorola_lux" path="device/motorola/lux" remote="github" revision="cm-12.1" />
    <project name="CyanogenMod/android_external_mm-dash" path="external/mm-dash" remote="github" />
    <project name="CyanogenMod/android_hardware_qcom_fm" path="hardware/qcom/fm" remote="github" />
    <project name="CyanogenMod/android_device_qcom_common" path="device/qcom/common" remote="github" />
    <project name="sultanqasim/gcc-linaro-4.9_arm-linux-gnueabihf" path="prebuilts/gcc/linux-x86/arm/arm-linux-gnueabihf-4.9" remote="github" revision="master" />
</manifest>
````

Then fetch the repositories
````
repo sync
````

##Building:
````
source build/envsetup.sh
breakfast lux
make clean
brunch lux
````
