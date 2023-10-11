#!/bin/bash

gcc -c lib/my/*.c
ar rc lib/my/libmy.a *.o

gcc *.c -I./include/ -L./lib/my/ -lmy

rm *.o
