import sys
input=sys.stdin.buffer.readline
from math import*


n=int(input())
arr=list(map(int,input().split()))
odd=list(filter(lambda x:x%2==1,arr))
even=list(filter(lambda x:x%2==0,arr))
odd.sort()
even.sort()
od=len(odd)
ev=len(even)
if od==ev or od-ev==1 or ev-od==1:
	print("0")
elif od>ev:
	od-=ev+1
	print(sum(odd[0:od]))
else:
	ev-=od+1
	print(sum(even[0:ev]))