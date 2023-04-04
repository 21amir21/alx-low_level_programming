# ALX - Low Level Programming

if you think what a terrible indentation remember I used the betty linter in this repo (pretty ~~stupid~~ sick right!)
still working on how to use it right.

go checkout [Betty-wiki](https://github.com/holbertonschool/Betty/wiki)

you can also check [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) & [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

# MORE INFO
BETTY LINTER
---
To run betty linter with command `betty <filename>` :
- Go to the [Betty](https://github.com/holbertonschool/Betty) repository
- Clone the repo to local machine.
- `cd` into Betty directory
- Install the linter with `sudo ./install.sh`
- copy the script below into editor;

```bash
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
- Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

you can now type `betty <filename>` to run the Betty linter
