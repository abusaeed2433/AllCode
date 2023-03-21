def max_digit(n):
    x=[]
    n=str(n)
    for i in range(0,len(n)):
        x.append(int(n[i]))
    c=int(max(x))
    return c

n=int(input())
y=0
while n!=0:
    x=max_digit(n)
    n=n-int(x)
    y+=1
print(y)
