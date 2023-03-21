import sys
input=sys.stdin.buffer.readline
import os

def isdistinct(s):
	s=str(s)
	if len(set(s))==len(s):
		return True
	return False

printed=False
a,b=map(int,input().split())
for i in range(a,b+1):
	if isdistinct(i):
		print(i)
		printed=True
		break
if printed==False:
	print("-1")

