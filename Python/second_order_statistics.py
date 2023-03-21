

input()
a=list(map(int,input().split()))
a=set(a)
a=list(a)
a.sort()
if len(a)==1:
	print("NO")
else:
	print(a[1])