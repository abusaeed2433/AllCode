n=int(input())
a=list(map(int,input().split()))
m=int(input())
b=list(map(int,input().split()))
a.sort(reverse=True)
s=sum(a)
for i in range(0,m):
    print(s-a[b[i]-1])
