import os
from math import*
from bisect import*


n=int(input())
s=input()
if n%4==0:
	a,t,c,g=[0]*4
	ns=s
	ns=sorted(ns)
	a=bisect_right(ns,"A")-bisect_left(ns,"A")
	t=bisect_right(ns,"T")-bisect_left(ns,"T")
	c=bisect_right(ns,"C")-bisect_left(ns,"C")
	g=bisect_right(ns,"G")-bisect_left(ns,"G")
	y=[a,t,c,g]
	#print(y)
	check=0
	for i in range(4):
		y[i]=(n//4)-y[i]
		if y[i]<0:
			check=1
			break
	if check==1:
		print("===")
	else:
		z=["A","T","C","G"]
		#print(y)
		for x in s:
			if x=="?":
				for i in range(4):
					if y[i]>0:
						print(z[i],end='')
						y[i]-=1
						break
			else:
				print(x,end='')
else:
	print("===")	