
#coding isn't(not) for me. i have seen this solution before

t=int(input())
while t:
	s=input()
	if s.count('1')==0 or s.count('2')==0 or s.count('3')==0:
		print("0")
		t-=1
		continue
	cl=[]
	sv=s[0]
	counter=1
	for i in range(1,len(s)):
		if s[i]==sv:
			counter+=1
		else:
			cl.append((sv,counter))
			counter=1
			sv=s[i]
	cl.append((sv,counter))
	ans=len(s)
	for i in range(0,len(cl)-2):
		if cl[i][0]!=cl[i+1][0] and cl[i+1][0]!=cl[i+2][0] and cl[i+2][0]!=cl[i][0]:
			ans=min(ans,cl[i+1][1]+2)
	print(ans)
	t-=1
	#unknown_2433