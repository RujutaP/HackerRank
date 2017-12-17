#!/bin/python

import sys

def simpleArraySum(n, ar):
    add=0
    for item in ar:
        add=add+item
    return add

n = int(raw_input().strip())
ar = map(int, raw_input().strip().split(' '))
result = simpleArraySum(n, ar)
print(result)