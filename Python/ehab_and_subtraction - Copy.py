

n,k=list(map(int,input().split()))
a=list(map(int,input().split()))
a.sort()
p=0
ma=0
for i in range(0,k):
    while p<n and a[p]<=ma:
        p+=1
    if p>=n and i>=n:
        print("0")
    else:
        print(a[p]-ma)
        ma=a[p]
    p+=1
