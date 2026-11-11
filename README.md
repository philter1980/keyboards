To flash the arduino pro micro with keyboard.json and destra or sinistra keymap.c execute compile than flash commands:
Structure of directories must be ~/qmk_firmware/keyboards/destra/keymaps/default/keymap.c
qmk compile -kb destra -km default
qmk flash -kb destra -km default
