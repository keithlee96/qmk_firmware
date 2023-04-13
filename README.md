# Notes to set up moonlander keyboard with zsa config

## one-time setup

```bash
python3 -m pip install --user qmk
cd ~/projects
gh repo clone zsa/qmk_firmware 2> /dev/null # Ignores errors
mkdir -p ./qmk_firmware/keyboards/moonlander/keymaps/layout # replace "layout" with layout name
```

Then download and setup wally.

[wally setup instructions](https://github.com/zsa/wally/wiki/Linux-install).

If you really want to, you can build your own wally - https://github.com/zsa/wally. But ceebs.

# Download a custom layout from Oryx, then build and deploy

1. Take a copy of whatever layout you use and download it.

Eg: https://configure.zsa.io/moonlander/layouts/VW5Ke/latest/0

2. Download the source by clicking the "download source button" and extract download to `~projects/moonlander`.

```
unzip moonlander_colemak-dh-v1-33_VW5Ke_gB0EM.zip -d /tmp/
```
The new files are in `/tmp/moonlander_colemak-dh-v1-33_source/*` - `config.h`, `keymap.c` and `rules.mk`.

Of course, update the names as needed.

3. Copy the data to the directory you want to modify.

```bash
export EXTRACTED_SOURCE=moonlander_colemak-dh-v1-33_source;
export LAYOUT_NAME=layout;
cp /tmp/${EXTRACTED_SOURCE}/* ~/projects/qmk_firmware/keyboards/moonlander/keymaps/${LAYOUT_NAME};
```

4. Build the keyboard. You may need to download some packages with `apt get` if you run into errors.

```bash
cd ~/projects/qmk_firmware;
make git-submodule;
make moonlander:layout;
```

5. Flash the keyboard.

Run wally - downloaded in 1-time setup - and flash.

Assuming you followed the steps, the binary should be at `~/projects/moonlander/moonlander_${LAYOUTNAME}.bin`. This is `moonlander_layout.bin` by default.

