import copy
t=int(input())
#previous solution was copied, but this one is not copied
def func(na):
	ana=copy.deepcopy(na)
	ana.sort()
	return na==ana or ana==na[::-1]



while t:
	n=int(input())
	a=list(map(int,input().split()))
	pos=-1
	for i in range(0,n):
		if a[i]==1:
			pos=i
			break
		else:
			continue
	na=a[pos+1:n]+a[0:pos]
	ana=copy.deepcopy(na)
	ana.sort()
	if func(na):
		print("YES")
	else:
		print("NO")
	t-=1