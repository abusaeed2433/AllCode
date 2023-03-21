

n,m=map(int,input().split())
ans=[]
cp=0
cpp=0
cp=-1
cpp=-1
ip=-1
fp=-1
count=0
for i in range(n):
	s=input()
	ans.append(s)
	for j in range(m):
		if s[j]=="*":
			ip=j
			count+=1
			break
	for j in range(m-1,-1,-1):
		if s[j]=="*":
			fp=j
			break
	if cp==-1 or cpp==-1:
		cp=ip
		cpp=fp
	else:
		if ip<cp:
			cp=ip
		if fp>cpp:
			fp=cpp
	#print(cp,cpp,ip,fp)
c=count
for i in range(n):
	if "*" in ans[i]:
		print(ans[i][cp:cpp+1])
		c-=1
	else:
		if c!=0 and c!=count:
			print(ans[i][cp:cpp+1])

