import os
from math import*

t=int(input())
while t:
	t-=1
	k,d0,d1=map(int,input().split())
	val=d0+d1
	s=str(d0)+str(d1)
	while len(s)<10:
		rem=val%10
		s+=str(rem)
		val+=rem
		if len(s)>4:
			if s[-4:]=="8624":
				break
	pos=len(s)-4
#	print(pos)
	if k<=len(s):
		if int(s[0:k])%3==0:
			print("YES")
		else:
			print("NO")
	else:
#		print(s,pos)
		main=int(s[:pos])%3
		k-=pos
		count=k//4
		rest=k%4
		val=2 if count%3==1 else 1 if count%3==2 else 0
		val1=1 if rest==3 else 2
#		print(main,val,val1)
		check=main+val+val1
		print("YES" if check%3==0 else "NO")


	

