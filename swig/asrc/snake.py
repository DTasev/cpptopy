#!/usr/bin/env python

import test
import two

mat=[[3,5,7],[8,10,12]]
print mat

avs = test.average(mat)
print avs

cow = test.moo()
cow.one=22
print cow.one

ghost =two.boo()
ghost.three=1.234
print ghost.three
