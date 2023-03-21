from math import*

a=int(input())
b=[]
f=[]
s1=0
s2=0
for i in range(a):
    c,d=map(int,input().split())
    b.append(int(fabs(s1+c-(d+s2))))
    f.append([c,d])
    s1+=c
    s2+=d


max3=max(b)

e=-1
for i in range(a):
	if b[i]==max3:
		e=i
		break
g=0
max1=f[e][0]
if max1>=f[e][1]:
    g=1
else:
    g=2
print(g,max3)