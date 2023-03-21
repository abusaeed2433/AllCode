#import sys
#input=sys.stdin.buffer.readline

n,m=map(int,input().split())
arr=[]
for i in range(n):
	s=input()
	arr.append(s)
i=0
temp=[]
count=0
#print(arr)
while i<m:
	ans=[]
	for j in range(n):
		ans.append(int(arr[j][i]))
	print(ans,temp)
	for j in range(n):
		if ans[j]==max(ans):
			if j+1 not in temp:
				temp.append(j+1)
				count+=1
				break
	i+=1
print(count)

