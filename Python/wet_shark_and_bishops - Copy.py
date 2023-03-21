import sys
input=sys.stdin.buffer.readline


t=int(input())
same=0
temp=[]
tmp=[]
while t:
	t-=1
	x,y=map(int,input().split())
	if x==y:
		same+=1
		temp.append(x+y)
	else:
		tmp.append([x,y])
		temp.append(x+y)
temp.sort()
ans=[same]
count=1
for i in range(len(temp)-1):
	if temp[i]==temp[i+1]:
		count+=1
	else:
		if count!=1:
			ans.append(count)
			count=1
if count!=1:
	ans.append(count)

tmp.sort()
for i in range(len(tmp)-1):
	count=1
	for j in range(i+1,len(tmp)):
		if tmp[j][0]-tmp[i][0]==tmp[j][1]-tmp[i][1]:
			count+=1
			tmp.pop(j)
	if count!=1:
		ans.append(count)
	tmp.pop(i)
c=0
for x in ans:
	c+=(x*(x-1))//2
print(c)
