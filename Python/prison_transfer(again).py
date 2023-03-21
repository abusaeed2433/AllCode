

n,t,c=map(int,input().split())
arr=list(map(int,input().split()))
count=0
ini_pos=0
for i in range(n):
	if arr[i]>t:
		count+=1
	else:
		ini_pos=i
		break
fin_pos=0
for i in range(n-1,-1,-1):
	if arr[i]>t:
		count+=1
	else:
		fin_pos=i
		break
#print(ini_pos,fin_pos)
if count>=n:
	print("0")
else:
	z=0
	ans=0
	for i in range(ini_pos,fin_pos+1):
		if arr[i]>t:
			count+=1
			z=1
		else:
			if z==1:
				count+=1
				z=0
#	print(n-c+1,count)
	ans=n-(c-1)-count
	if ans<0:
		print("0")
	else:
		print(ans)
					#unknown_2433

