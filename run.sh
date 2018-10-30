#!/bin/sh

SCRIPTDIR=$(dirname $0)

cp $SCRIPTDIR/src/puzzle $SCRIPTDIR/hdd
fsuae.fs-uae $SCRIPTDIR/Amiga500.fs-uae
