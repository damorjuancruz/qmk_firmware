# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
RGB_MATRIX_CUSTOM_KB = yes
SPACE_CADET_ENABLE = no
CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes

SRC += features/sentence_case.c
