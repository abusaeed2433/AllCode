
s=input()
count0=0
count1=0
for x in s:
	if x=='1':
		if count0>=7:
			break
		else:
			count1+=1
			count0=0
	else:
		if count1>=7:
			break
		else:
			count0+=1
			count1=0
	
if count0>=7 or count1>=7:
	print("YES")
else:
	print("NO")