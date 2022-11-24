/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include <GamepadEnums.h>


#define BOARD_LEDS_PIN 0

#define LED_BRIGHTNESS_MAXIMUM 100
#define LED_BRIGHTNESS_STEPS 5
#define LED_FORMAT LED_FORMAT_GRB
#define LEDS_PER_PIXEL 1

#define PIN_DPAD_UP     1
#define PIN_DPAD_DOWN   2
#define PIN_DPAD_RIGHT  3
#define PIN_DPAD_LEFT   4
#define PIN_BUTTON_B1   5
#define PIN_BUTTON_B2   6
#define PIN_BUTTON_R2   7
#define PIN_BUTTON_L2   8
#define PIN_BUTTON_B3   9
#define PIN_BUTTON_B4   10
#define PIN_BUTTON_R1   11
#define PIN_BUTTON_L1   15
#define PIN_BUTTON_S1   13
#define PIN_BUTTON_S2   14
#define PIN_BUTTON_L3   27
#define PIN_BUTTON_R3   26
#define PIN_BUTTON_A1   12
#define PIN_BUTTON_A2   -1
#define PIN_BUTTON_TURBO -1
#define PIN_SLIDER_LS   -1
#define PIN_SLIDER_RS   -1

#define LEDS_DPAD_LEFT   0
#define LEDS_DPAD_DOWN   1
#define LEDS_DPAD_RIGHT  2
#define LEDS_DPAD_UP     3
#define LEDS_BUTTON_B1   4
#define LEDS_BUTTON_B2   5
#define LEDS_BUTTON_R2   6
#define LEDS_BUTTON_L2   7
#define LEDS_BUTTON_B3   8
#define LEDS_BUTTON_B4   9
#define LEDS_BUTTON_R1   10
#define LEDS_BUTTON_L1   11

#define DEFAULT_SOCD_MODE SOCD_MODE_NEUTRAL
#define BUTTON_LAYOUT BUTTON_LAYOUT_STICKLESS
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_STICKLESS

#define LED_BRIGHTNESS_MAXIMUM 100
#define LED_BRIGHTNESS_STEPS 5
#define LED_FORMAT LED_FORMAT_GRB
#define LEDS_PER_PIXEL 1

#define BOARD_LEDS_PIN 0

#define PLED_TYPE PLED_TYPE_NONE
#define PLED1_PIN -1
#define PLED2_PIN -1
#define PLED3_PIN -1
#define PLED4_PIN -1


// This is the Analog section.
// In this section you can specify if Analog is enabled, and, if endabled, which pins will be used for it.
// The default for `ANALOG_ADC_VRX` and `ANALOG_ADC_VRY` is `-1` which disables them.
// To enable a `ANALOG_ADC_VRX` and `ANALOG_ADC_VRY`, replace the `-1` with the GPIO pin numbers that are desired.

#define ANALOG_ADC_VRX -1
#define ANALOG_ADC_VRY -1


// This is the I2C Display section (commonly known as the OLED display section).
// In this section you can specify if a display as been enabled, which pins are assined to it, the block address and speed.
// The default for `HAS_I2C_DISPLAY` is `1` which enables it.
// To disable the display you can change `HAS_I2C_DISPLAY` to `-1`.
// The default `I2C_SDA_PIN` is `0`.
// The defualt `I2C_SCL_PIN` is `1`.
// The defualt `I2C_BLOCK` is `12c0`.
// If you change the `I2C_SDA_PIN` and `I2C_SCL_PIN` pin mapping, you may need to change the `I2C_BLOCK` as well.
// The defualt `I2C_SPEED` is `400000`.
// This should be more than fast enough for most displays.
// Some smaller displays (like 0.96" and 1.31") can go up to `800000` or even `1000000`.
// The default `DISPLAY_FLIP` is `0`.
// This can be changed to `1` to have the dispaly output flipped.
// The default `DISPLAY_INVERY` is `0`.
// This can be changed to `1` to have the color on the display inverted.
// The default `BUTTON_LAYOUT` is `BUTTON_LAYOUT_STICK` which will show an arcade stick on the left hand side of the display.
// There are seven options for `BUTTON_LAYOUT` currently:
// 1 - BUTTON_LAYOUT_STICK - This is a basic joystick layout
// 2 - BUTTON_LAYOUT_STICKLESS - This is a basic stickless (all button) layout
// 3 - BUTTON_LAYOUT_BUTTONS_ANGLED - This a WASD button layout that is angled
// 4 - BUTTON_LAYOUT_BUTTONS_BASIC - This a WASD button layout that is straight
// 5 - BUTTON_LAYOUT_KEYBOARD_ANGLED - This is a WASD keyboard layout that is angled
// 6 - BUTTON_LAYOUT_KEYBOARDA - This is a WASD keyboard layout that is straight
// 7 - BUTTON_LAYOUT_DANCEPADA - This is a dance pad layout (must be used with `BUTTON_LAYOUT_DANCEPADB` in `BUTTON_LAYOUT_RIGHT`)
// The default `BUTTON_LAYOUT_RIGHT` is `BUTTON_LAYOUT_NOIR8` which will show eight buttons on the right hand side of the display.
// There are eleven options for `BUTTON_LAYOUT_RIGHT` currently:
// 1 - BUTTON_LAYOUT_ARCADE - This is a standard 8 button arcade layout
// 2 - BUTTON_LAYOUT_STICKLESSB - This is a basic stickless (all button) layout
// 3 - BUTTON_LAYOUT_BUTTONS_ANGLEDB - This is a standard 8 button arcade layout that is angled
// 4 - BUTTON_LAYOUT_VEWLIX - This is the standard 8 button Vewlix layout
// 5 - BUTTON_LAYOUT_VEWLIX7 - This is the standard 7 button Vewlix layout
// 6 - BUTTON_LAYOUT_CAPCOM - This is the standard 8 button Capcom layout
// 7 - BUTTON_LAYOUT_CAPCOM6 - This is the stndard 6 button Capcom layout
// 8 - BUTTON_LAYOUT_SEGA2P - This is the standard 8 button Sega2P layout
// 9 - BUTTON_LAYOUT_NOIR8 - This is the standard 8 button Noir layout
// 10 - BUTTON_LAYOUT_KEYBOARDB - This is a WASD keyboard layout that is straight
// 11 - BUTTON_LAYOUT_DANCEPADB - This is a dance pad layout (must be used with `BUTTON_LAYOUT_DANCEPADA` in `BUTTON_LAYOUT`)
// The default `SPLASH_MODE` is `NOSPLASH`.
// There are four options for `SPLASH_MODE` currently:
// 1 - `STATICSPLASH` - This will display the static splash image
// 2 - `CLOSEIN` - This will display the static splash image as a top and bottom coming together animation
// 3 - `CLOSEINCUSTOM` - This will display the custom splash image as a top and bottom coming together animation
// 4 - `NOSPLASH` - This will not display a splash screen on boot
// Special note - All of the splash screen images can be changed via `include/bitmaps.h`

#define HAS_I2C_DISPLAY 0
#define I2C_SDA_PIN -1
#define I2C_SCL_PIN -1
#define I2C_BLOCK i2c1
#define I2C_SPEED 800000
#define DISPLAY_FLIP 0
#define DISPLAY_INVERT 0

#define SPLASH_MODE NOSPLASH

#endif
