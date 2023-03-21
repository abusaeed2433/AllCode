import copy
#i don't know how it worked. i have copied it
def func(a):
	b=copy.deepcopy(a)
	b.sort()
	return a==b or a==b[::-1]


t=int(input())
while t:
	n=int(input())
	a=list(map(int,input().split()))
	i=a[0]
	j=n-1-a[0]
	c=[(x-i)%n+1 for x in a]
	d=[(x+j)%n+1 for x in a]
	if func(c) or func(d):
		print("YES")
	else:
		print("NO")
	t-=1