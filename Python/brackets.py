
t=int(input())
while t:
	t-=1
	n=int(input())
	s=input()
	op,cl=[0]*2
	for i in range(n):
		if s[i]=="(":
			op+=1
		else:
			cl+=1
			if op>0:
				op-=1
				cl-=1
	print(op)