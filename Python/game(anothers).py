import os

t=int(input())
while t:
	t-=1
	s=input()
	count0=0
	count1=0
	for x in s:
		if x=="1":
			count1+=1
		else:
			count0+=1
	if min(count0,count1)%2==0:
		print("NET")
	else:
		print("DA")
