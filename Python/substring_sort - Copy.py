#import sys
#input=sys.stdin.buffer.readline

t=int(input())
s=[]
slen=[]
n=t
while t:
	t-=1
	s1=input()
	s.append(s1)
	slen.append(len(s1))
#print(s)
#print(slen)
slen.sort()
new_s=[]
k=0
for i in range(n):
	for x in s:
		if len(x)==slen[k]:
			new_s.append(x)
			k+=1
			s.remove(x)
			break
		else:
			continue
#print(new_s)
z=0
for i in range(n-1):
	if new_s[i] in new_s[i+1]:
		continue
	else:
		z=1
		break
if z==1:
	print("NO")
else:
	print("YES")
	for x in new_s:
		print(x)


