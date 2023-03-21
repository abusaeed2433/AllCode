

n,a,b=list(map(int,input().split()))
t=a+b
n_pos=n-a
while t<n-1:
    t+=1
    n_pos-=1
print(n_pos)
    
