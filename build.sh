#!/bin/sh

TMPDIR=__tmp__
rm -rf $TMPDIR
mkdir $TMPDIR

for file in *.c; do
	cc -Wall -c $file -o $TMPDIR/$(basename $file .c).o
done

ar rcs libquotica.a $TMPDIR/*

rm -rf $TMPDIR

