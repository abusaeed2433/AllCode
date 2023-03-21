import os

tc=int(input())
while tc:
	tc-=1
	s=input()
	t=input()
	p=input()
	checked=False
	if len(s)<=len(t):
		k=0
		for i in range(len(t)):
			if t[i]==s[k]:
				k+=1
			if k>=len(s):
				break
		if k==len(s):
			checked=True
	arr=list(s)+list(p)
	arr=sorted(arr)
	t=sorted(t)
#	print(arr)
	isprinted=False
	for i in range(len(t)):
		if t[i] in arr:
			arr.remove(t[i])
		else:
			isprinted=True
			break
	if isprinted:
		print("NO")
	else:
		if checked:
			print("YES")
		else:
			print("NO")
