#!/bin/bash

make && ./chibicc lc2k/main.c -S && ./chibicc lc2k/comb.c -S

./assembler main.as main.out
./assembler comb.as comb.out
./linker main.out comb.out a.out
./simulator a.out
