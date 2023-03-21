import sys
input=sys.stdin.buffer.readline

n=input()
ans=[]
while len(n)!=1:
	s1=(int(n)-int(n)%11)//11
	n=str(int(n)%11)
	ans1=""
	for i in range(len(str(s1))):
		ans1+="1"
	for i in range(s1):
		ans.append(ans1)
for i in range(len(n)):
	ans.append("1")
print(len(ans))
for x in ans:
	print(x,end=' ')
print("NOT SOLVED YET")