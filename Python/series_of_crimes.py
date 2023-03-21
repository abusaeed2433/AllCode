

n,m=map(int,input().split())
pos=[]
for i in range(n):
	s=input()
	if "*" in s:
		for j in range(m):
			if s[j]=="*":
				pos.append([i+1,j+1])
				

pos.sort()
if pos[0][0]==pos[1][0]:
	if pos[0][1]==pos[2][1]:
		print(pos[2][0],pos[1][1])
	else:
		print(pos[2][0],pos[0][1])
else:
	if pos[0][1]==pos[2][1]:
		print(pos[0][0],pos[1][1])
	else:
		print(pos[0][0],pos[2][1])
#print(pos)