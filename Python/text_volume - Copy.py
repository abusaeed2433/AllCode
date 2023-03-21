
n=int(input())
s=input()
ans=0
x=0
for i in range(n):
	if s[i]>='A' and s[i]<='Z':
		x+=1
	elif s[i]==' ':
		if ans<x:
			ans=x
		x=0
	else:
		continue
if ans<x:
	ans=x
print(ans)
				#unknown_2433