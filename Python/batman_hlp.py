

from math import*

s1=input()
s2=input()
s=s1+s2
l1=s[0:(int(ceil((len(s1)+len(s2))/2)))]
l2=s[(int(ceil((len(s1)+len(s2))/2))):len(s1)+len(s2)]
l2=l2[::-1]
print(l1)
print(l2)
#print(s)
pos=-1
for i in range(len(l2)):
	if l1[i]!=l2[i]:
		pos=i
		break

if pos!=-1:
	print(l1[0:pos]+min(l1[pos],l2[pos])+l2[0:pos])
else:
	print(s)