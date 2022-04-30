#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
arg liball.a
