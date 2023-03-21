import math

n=int(input())
a=list(map(int,input().split()))
c=list(filter(lambda x:x%2==0,a))
print(min(len(c),n-len(c)))