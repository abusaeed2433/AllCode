n,a,b=list(map(int,input().split()))
h=list(map(int,input().split()))
h.sort()
x=h[b-1]
y=h[b]
x=abs(x-y)
print(x)
