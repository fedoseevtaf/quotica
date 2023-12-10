#!/bin/sh

TMPFILE="test/__tmp__"

for file in "test/*.c"; do
	cc -Wall -I. -o $TMPFILE $file libquotica.a
	$TMPFILE
	if [ $? != 0 ]; then
		echo "ERROR in $file!"
		rm -f $TMPFILE
		break;
	fi
	rm -f $TMPFILE
done


