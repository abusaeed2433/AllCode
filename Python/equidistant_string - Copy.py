#import sys
#input=sys.stdin.buffer.readline

s=input()
t=input()
dif=0
for i in range(len(s)):
	if s[i]==t[i]:
		continue
	else:
		dif+=1
if dif%2==0:
	count=0
	for i in range(len(s)):
		if s[i]==t[i]:
			print(s[i],end='')
		else:
			count+=1
			if count<=(dif//2):
				print(s[i],end='')
			else:
				print(t[i],end='')
else:
	print("impossible")
						#unknown_2433