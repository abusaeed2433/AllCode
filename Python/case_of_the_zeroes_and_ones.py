
n=int(input())
s=input()
count0=0
count1=0
for i in range(n):
	if s[i]=="1":
		count1+=1
	else:
		count0+=1
print(max(count1,count0)-min(count0,count1))
			#unknown_2433