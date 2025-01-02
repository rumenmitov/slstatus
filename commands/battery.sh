#!/usr/bin/env bash

battery=$(cat /sys/class/power_supply/BAT0/capacity )
connected=$( cat /sys/class/power_supply/AC0/online )

test $connected -eq 1 && echo "🔌 $battery%" && exit
test $battery -le 25 && echo "🪫 $battery%" && exit
test $battery -le 100 && echo "🔋 $battery%" && exit

