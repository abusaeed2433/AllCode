import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input()))
	arr.sort()
	c=1
	ans=0
	while c>0:
		arrr=[]
		for x in arr:
			arrr.append(x^c)
		arrr.sort()
		if arrr==arr:
			ans=c
			c=0
	print(ans)



