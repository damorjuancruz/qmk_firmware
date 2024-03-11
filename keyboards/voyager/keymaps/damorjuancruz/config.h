/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ONESHOT_TAP_TOGGLE 1

#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 500

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"rzxQ7/Xjzx9"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define COMBO_COUNT 9

#define RGB_MATRIX_STARTUP_SPD 60

#define TAPPING_TERM 300
#define PERMISSIVE_HOLD
