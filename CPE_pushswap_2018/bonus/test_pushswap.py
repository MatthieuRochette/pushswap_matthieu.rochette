#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from sys import argv, exit
import random as r

if len(argv) != 4:
    exit(1)

print("./push_swap ", end='')
for i in range(int(argv[1])):
	print(r.randrange(argv[2], argv[3]), '', end='')