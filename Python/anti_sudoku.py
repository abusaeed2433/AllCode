

t=int(input())
#ans=[]
while t:
	t-=1
	for i in range(9):
		s=input()
		if i==0:
			#ans.append()
			s=s[1]+s[1:9]
		elif i==1:
			#ans.append()
			s=s[0:4]+s[3]+s[5:9]
		elif i==2:
#			ans.append()
			s=s[0:8]+s[7]
		elif i==3:
#			ans.append()
			s=s[0]+s[0]+s[2:9]
		elif i==4:
#			ans.append()
			s=s[0:5]+s[4]+s[6:9]
		elif i==5:
			#ans.append()
			s=s[0:7]+s[6]+s[8]
		elif i==6:
#			ans.append()
			s=s[0:2]+s[1]+s[3:9]
		elif i==7:
#			ans.append()
			s=s[0:3]+s[2]+s[4:9]
		elif i==8:
#			ans.append()
			s=s[0:6]+s[5]+s[7:9]
		print(s)
#		for x in s:
#			ans.append(x)
#	ans[1]=ans[0]
#	ans[13]=ans[12]
#	ans[25]=ans[24]
#	ans[36]=ans[27]
#	ans[32]=ans[41]
#	ans[51]=ans[52]
#	ans[65]=ans[56]
#	ans[57]=ans[66]
#	ans[80]=ans[71]
#	count=0
#	for x in ans:
#		print(x)#,end='')
#		count+=1
#		if count==9:
#			print()
#			count=0
