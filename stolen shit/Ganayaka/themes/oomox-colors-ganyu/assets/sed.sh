#!/bin/sh
sed -i \
         -e 's/#15070f/rgb(0%,0%,0%)/g' \
         -e 's/#e9e1e4/rgb(100%,100%,100%)/g' \
    -e 's/#15070f/rgb(50%,0%,0%)/g' \
     -e 's/#A67491/rgb(0%,50%,0%)/g' \
     -e 's/#15070f/rgb(50%,0%,50%)/g' \
     -e 's/#e9e1e4/rgb(0%,0%,50%)/g' \
	"$@"
