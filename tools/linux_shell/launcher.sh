#!/bin/bash

SCRIPT_DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

if [ "$(whereis x-terminal-emulator)" != "x-terminal-emulator:" ]; then
    TERMINAL="x-terminal-emulator -e"
elif [ "$(whereis xfce4-terminal)" != "xfce4-terminal:" ]; then
    TERMINAL="xfce4-terminal --icon=wxphp -e"
elif [ "$(whereis lxterminal)" != "lxterminal:" ]; then
    TERMINAL="lxterminal -e"
elif [ "$(whereis gnome-terminal)" != "gnome-terminal:" ]; then
    TERMINAL="gnome-terminal -e"
elif [ "$(whereis xterm)" != "xterm:" ]; then
    TERMINAL="xterm -e"
else
    echo "No suitable terminal emulator found..." 1>&2;
    exit 1
fi

$TERMINAL $SCRIPT_DIR/shell.sh 
