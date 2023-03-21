from bisect import*
from math import*
import sys
arr=[4,5,3,8,3,7]
arr.sort()
print(arr)
k=7
c=bisect_right(arr,3)
d=bisect_left(arr,8)
print(c,d)

