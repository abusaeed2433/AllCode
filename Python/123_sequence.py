import sys
input=sys.stdin.buffer.readline
from bisect import*

n=int(input())
arr=list(map(int,input().split()))
arr.sort()
one=bisect_right(arr,1)-bisect_left(arr,1)
two=bisect_right(arr,2)-bisect_left(arr,2)
three=bisect_right(arr,3)-bisect_left(arr,3)
#print(one,two,three)
print(one+two+three-max(one,two,three))