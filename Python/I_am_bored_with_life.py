

a,b=list(map(int,input().split()))
n=min(a,b)
s=1
for i in range(1,n+1):
    s=s*i
print(s)
