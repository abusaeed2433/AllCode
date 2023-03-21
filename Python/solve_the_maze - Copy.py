import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n,m=map(int,input().split())
	ans=[]
	z=0
	for i in range(n):
		s=input()
		ans.append(s)
		if "GB" in s or "BG" in s:
			z=1
	if z==1:
		print("No")
	else:
		

