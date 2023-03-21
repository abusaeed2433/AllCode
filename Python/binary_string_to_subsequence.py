import os
from math import*


t=int(input())
while t:
	t-=1
	n=int(input())
	s=input()
	ans=[]
	count=1
	for i in range(n-1):
		if s[i]==s[i+1]:
			count+=1
		else:
			ans.append(count)
			count=1
	ans.append(count)
#	print(ans)
	if len(ans)==1:
		print(ans[0])
		for i in range(ans[0]):
			print(i+1,end=' ')
		print()
	else:
		ep=ans[1]
		ev=ans[0]
		eps=[ep]
		evs=[ev]
		pt=[]
		for i in range(2):
			for j in range(ans[i]):
				pt.append(j+1)
		for i in range(2,len(ans)):
			if i%2==0:
				k=1
				for j in range(ans[i]):
					if j+1<=ep:
						pt.append(j+1)
					else:
						pt.append(max(ev+k,pt[-1]+1))
						k+=1
			else:
				k=1
				for j in range(ans[i]):
					if j+1<=ev:
						pt.append(j+1)
					else:
						pt.append(max(ep+k,pt[-1]+1))
						k+=1
			if i%2==0 and ans[i]<ev:
				ev=ans[i]
				evs.append(ev)
			if i%2==1 and ans[i]<ep:
				ep=ans[i]
				eps.append(ep)
		print(eps)
		print(evs)
#			print(ev,ep)
#		print(len(set(pt)))
#		for i in range(len(pt)):
#			print(pt[i],end=' ')
#		print()

