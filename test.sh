#!/bin/bash

make && ./chibicc lc2k/main.c -S && ./chibicc lc2k/test.c -S

./assembler main.as main.out
./assembler test.as test.out
./linker main.out test.out a.out
./simulator a.out
