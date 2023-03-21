

n=int(input())
a=list(map(int,input().split()))
x={4:0,8:0,15:0,16:0,23:0,42:0}
for i in range(0,n):
	x[a[i]]+=1
print(x)
minx=min(list(x.values()))
print(n-(6*minx))

