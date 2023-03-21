import sys
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')

n=int(input())
s=input()
ip=0
fp=n
z=0
zz=0
for i in range(n):
	if s[i]=="1" and z==0:
		ip=i
		z=1
	if s[n-1-i]=="1" and zz==0:
		fp=n-1-i
		zz=1
	if z==1 and zz==1:
		break
s=s[ip:fp+1]
#print(s)
count0,count00,count1,count11,check,z1,z0=[0]*7
for x in s:
	if x=="1":
#		print(count00,count0,count11,count1,"a")
		if count00!=0 and z1==1:
			if count0!=count00:
				check=1
				break
		else:
			if count00==0:
				count00=count0
		count0=0
		count1+=1
		z0=1
		z1=0
	else:
#		print(count00,count0,count11,count1,"b")
		if count11!=0 and z0==1:
			if count1!=count11:
				check=1
				break
		else:
			if count11==0:
				count11=count1
		count1=0
		z0=0
		z1=1
		count0+=1
if count11!=0:
	if count1!=count11:
		check=1
if check==0:
	print("YES")
else:
	print("NO")