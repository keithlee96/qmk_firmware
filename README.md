# Notes to set up moonlander keyboard with zsa config

## one-time setup

```bash
python3 -m pip install --user qmk
cd ~/projects
gh repo clone zsa/qmk_firmware 2> /dev/null # Ignores errors
mkdir -p ./qmk_firmware/keyboards/moonlander/keymaps/layout # replace "layout" with layout name
```

# Download a custom layout from Oryx, then build and deploy

1. Take a copy of whatever layout you use and download it.

		Eg: https://configure.zsa.io/moonlander/layouts/VW5Ke/latest/0

1. Download the source by clicking the "download source button" and extract and move the files to the right subdirectory.

		The files you need to move are `config.h`, `keymap.c` and `rules.mk`.

		Set the bash variables for next script:

		```bash
		export DOWNLOADED_FILEPATH=~/Downloads/mooonlander_rstars.zip
		export LAYOUT_NAME=layout;
		```

		Use the script to unzip to /tmp and move the files to the right subdirectory:

		```bash
		rm -rf /tmp/moonlander
		mkdir -p /tmp/moonlander
		mkdir -p ~/projects/qmk_firmware/keyboards/moonlander/keymaps/${LAYOUT_NAME};

		unzip ${DOWNLOADED_FILEPATH} -d /tmp/moonlander
		cp /tmp/moonlander/*source/* ~/projects/qmk_firmware/keyboards/moonlander/keymaps/${LAYOUT_NAME};
		```

1. Build the keyboard. You may need to download some packages with `apt get` if you run into errors.

		```bash
		cd ~/projects/qmk_firmware;
		make git-submodule;
		make moonlander:${LAYOUT_NAME};
		```

1. Flash the keyboard.

		Run wally and flash with the binary in `~/projects/qmk_firmware/moonlander_${LAYOUTNAME}.bin`. This is `moonlander_layout.bin` by default.

		```
		~/projects/qmk_firmware/wally
		```

		> You may need to do the 1-time setup specified in https://github.com/zsa/wally/wiki/Linux-install first.
