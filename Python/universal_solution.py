import os
from math import*

t=int(input())
while t:
	t-=1
	s=input()
	s=list(s)
	p=list(filter(lambda x:x=="P",s))
	r=list(filter(lambda x:x=="R",s))
	ss=list(filter(lambda x:x=="S",s))
	m=max(len(p),len(r),len(ss))
	val=""
	if len(p)==m:
		val="S"
	elif len(r)==m:
		val="P"
	else:
		val="R"

	for i in range(len(s)):
		print(val,end='')
	print()