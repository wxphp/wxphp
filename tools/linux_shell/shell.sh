#!/bin/bash

SCRIPT_DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

cat $SCRIPT_DIR/shell_header.txt

cd ~

/bin/bash
