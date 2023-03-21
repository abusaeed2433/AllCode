import sys
import os
from math import*
input=sys.stdin.buffer.readline

v1,v2,v3,vm=map(int,input().split())
if vm>2*v3 or 2*vm<v3:
	print("-1")
else:
	if vm>=v2:
		print("-1")
	else:
		if max(v2,(2*vm)+1)==max(v1,(2*vm)+1):
			print(max(v1,(2*vm)+2))
			print(max(v2,(2*vm)+1))
		else:
			print(max(v1,(2*vm)+1))
			print(max(v2,(2*vm)+1))
		print(max(v3,vm))
