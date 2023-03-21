from math import*
from bisect import*
import sys
input=sys.stdin.buffer.readline

n,r,a,m=map(int,input().split())
arr=list(map(int,input().split()))
s=sum(arr)
av=round(s/n)
arr2=list(filter(lambda x:x>=av,arr))
s1=sum(arr2)-av*len(arr2)
arr3=list(filter(lambda x:x<av,arr))
arr4=list(filter(lambda x:x>av,arr2))
mc=a*(s-min(arr)*n)

maxc=r*(max(arr)*n-s)

#print(s1)
hc=s1*m
if s<av*n:
	hc+=(av*n-s)*r
elif s>av*n:
	hc+=(s-av*n)*a-m*(s1-(av*len(arr3)-sum(arr3)))


exc=0
if len(arr3)>0:
	ss=av*len(arr3)-sum(arr3)
	exc=ss*r
if len(arr4)>0:
	ss1=sum(arr4)-av*len(arr4)
	exc+=ss1*a

print(mc,maxc,hc,exc)
print(min(mc,maxc,hc,exc))

print()
print(av,s,n,r,r*(max(arr)*n-sum(arr)))
