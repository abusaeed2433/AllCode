import sys
inpuy=sys.stdin.buffer.readline
from math import*
import copy

def ispointsame(m,val):
	for i in range(4):
		if m[i]==val:
			for j in range(i+1,4):
				if m[j]==val:
					if val==-1:
#						print(i,j,end=' ')
						if max(d[i][1],d[i][3])-max(d[j][1],d[j][3])==0 and min(d[i][1],d[i][3])-min(d[j][1],d[j][3])==0:
							return True
					else:
						if max(d[i][0],d[i][2])-max(d[j][0],d[j][2])==0 and min(d[i][0],d[i][2])-min(d[j][0],d[j][2])==0:
							return True
	return False
def isvalid(m):
	a=[]
	c=[]
	for i in range(4):
		if m[i]==1:
			a.append(i)
		else:
			c.append(i)
	point1=[[d[a[0]][0],d[a[0]][1]],[d[a[0]][2],d[a[0]][3]],[d[a[1]][0],d[a[1]][1]],[d[a[1]][2],d[a[1]][3]]]
	point2=[[d[c[0]][0],d[c[0]][1]],[d[c[0]][2],d[c[0]][3]],[d[c[1]][0],d[c[1]][1]],[d[c[1]][2],d[c[1]][3]]]
	for i in range(4):
		if point1[i] not in point2:
			return False
	return True
def faltu():
	for i in range(4):
		if d[i][0]==d[i][2] and d[i][1]==d[i][3]:
			return False
	return True

d=[]
m=[]
for i in range(4):
	a,b,c,d1=map(int,input().split())
	if c-a==0:
		m.append(-1)
	elif d1-b==0:
		m.append(1)
	d.append([a,b,c,d1])
n=copy.deepcopy(m)
m.sort()
if len(m)<4:
	print("NO")
elif m[0]==m[1] and m[0]==-1:
	if m[2]==m[3] and m[3]==1:
		if ispointsame(n,-1) and ispointsame(n,1) and faltu():
			if isvalid(n):
				print("YES")
			else:
				print("NO")
		else:
			print("NO")
	else:
		print("NO")
else:
	print("NO")
#print(d)
#print(n)
#print(max(d[2][1],d[2][3])-max(d[3][1],d[3][3])==0 and min(d[2][1],d[2][3])-min(d[3][1],d[3][3])==0)
#i=0
#j=2
#print(max(d[i][0],d[i][2])-max(d[j][0],d[j][2])==0 and min(d[i][0],d[i][2])-min(d[j][0],d[j][2])==0)
