import math

s=input()
n=int(math.ceil(len(s)/2))
count=0
count1=0
ans=''
for i in range(0,len(s)):
	if int(s[i])==7 or int(s[i])==4:
		if int(s[i])==7:
			count1+=1
	if int(s[i])<=4 and i==0:
		if count>=n:
			ans+='7'
			count1+=1
		else:
			ans+='4'
			count+=1
	else:
		if count1>=n:
			ans+='4'
			count+=1
		else:
			ans+='7'
			count1+=1
print(ans)

