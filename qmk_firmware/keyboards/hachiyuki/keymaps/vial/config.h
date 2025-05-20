#pragma once
#define EE_HANDS
#define VIAL_KEYBOARD_UID {0x1a, 0x54, 0xd5, 0x60, 0x3e, 0xcf, 0x0a, 0x1f}
#define VIAL_TAP_DANCE_ENTRIES 8
#define VIAL_COMBO_ENTRIES 8
#define PICO_FLASH_SIZE_BYTES (1 * 1024 * 1024)
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_INVERT_Y

/*
 * Trackball Rotation Angle
 * Defines the clockwise rotation angle for the trackball sensor data.
 * Possible values:
 *   0: No rotation (default behavior)
 *   90: 90 degrees clockwise rotation (X becomes -Y, Y becomes X)
 *   180: 180 degrees clockwise rotation (X becomes -X, Y becomes -Y)
 *   270: 270 degrees clockwise rotation (X becomes Y, Y becomes -X)
 */
#define TRACKBALL_ROTATION_ANGLE 90
