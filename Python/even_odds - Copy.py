a=list(map(int,input().split()))
n=a[0]
k=a[1]
if (k<=int((n+1)/2)):
    c=int(2*k-1)
else:
    c=(int)(2*(k-int((n+1)/2)))
print(c)
