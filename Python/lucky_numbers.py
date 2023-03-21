import math
n=int(input())
x=0
for i in range(1,n+1):
    x+=int(math.ceil((2**i)))
print(x)
    
