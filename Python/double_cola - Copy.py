

n=int(input())
d=1
c=1
while c<n:
    c+=(5*d)
    d+=1
x=d-1
k=0
c-=(5*x)
print(c,x)
for i in range(0,5):
    if n>=c and n<=(c-1+x):
        k+=1
        break
    else:
        k+=1
        c+=x
    
if k==2:
    print("Penny")
