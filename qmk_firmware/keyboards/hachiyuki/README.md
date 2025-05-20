# Hachiyuki Keyboard

This document describes the Hachiyuki keyboard, a custom mechanical keyboard featuring a trackball.

## Features

*   Integrated trackball (PAW3222 sensor)
*   Powered by QMK firmware
*   Configurable via Vial

## Configuration

The Hachiyuki keyboard offers several configuration options that can be adjusted by modifying the `keymaps/vial/config.h` file within the QMK firmware structure for this keyboard (`qmk_firmware/keyboards/hachiyuki/keymaps/vial/config.h`).

### Trackball Rotation Angle (`TRACKBALL_ROTATION_ANGLE`)

This setting allows you to rotate the perceived orientation of the trackball. This is useful if you mount or use the keyboard in a non-standard orientation.

*   **Purpose**: Defines the clockwise rotation angle for the trackball sensor data.
*   **File**: `qmk_firmware/keyboards/hachiyuki/keymaps/vial/config.h`
*   **Supported Values**:
    *   `0`: No rotation. This is the default behavior if the option is not defined or set to an unsupported value.
    *   `90`: 90 degrees clockwise rotation. If you physically rotate your keyboard 90 degrees counter-clockwise (trackball on the left, pointing up), this setting will make the cursor respond as if the trackball is in its standard orientation. (Effectively, sensor X becomes -Y, and sensor Y becomes X).
    *   `180`: 180 degrees clockwise rotation. (Sensor X becomes -X, sensor Y becomes -Y).
    *   `270`: 270 degrees clockwise rotation. (Sensor X becomes Y, sensor Y becomes -X).
*   **Default Behavior**: If `TRACKBALL_ROTATION_ANGLE` is not defined or is set to a value other than 90, 180, or 270, no rotation will be applied (equivalent to 0 degrees).

To change the trackball rotation, open the specified `config.h` file and modify the `#define TRACKBALL_ROTATION_ANGLE` line to your desired value. For example, for a 90-degree rotation:
```c
#define TRACKBALL_ROTATION_ANGLE 90
```
After modifying the file, you will need to recompile and flash the firmware to your keyboard.
