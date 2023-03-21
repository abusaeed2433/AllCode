
from collections import defaultdict
def isPrime(n):
    for i in range(2,n):
        if n%i==0:
            return False
    return True

def calc(n):
    d=defaultdict(int)
    d[0]=1
    ans=1
    for i in range(2,n):
        d[i-1] = 1+d[(n%i)-1]
        ans+=d[i-1]
    return ans

arr=[]
for i in range(2,1000001):
    if isPrime(i):
        arr.append(calc(i)/(i-1))
print(arr)
