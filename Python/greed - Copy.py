n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
a=sum(a)
b.sort(reverse=True)
b=b[0]+b[1]
if a<=b:
    print("YES")
else:
    print("NO")
