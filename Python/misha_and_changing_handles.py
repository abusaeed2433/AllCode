
t=int(input())
old=[]
new=[]
for i in range(t):
	o,n=map(str,input().split())
	old.append(o)
	new.append(n)
ans=[]
while 0<len(old):
#	print("a")
	s=new[0]
	ans.append(old[0])
	old.pop(0)
	new.pop(0)
	j=0
	while j<len(old):
		if old[j]==s:
			s=new[j]
			old.pop(j)
			new.pop(j)
		else:
			j+=1
	ans.append(s)
print(len(ans)//2)
i=0
while i<len(ans)-1:
	print(ans[i]+" "+ans[i+1])
	i+=2
