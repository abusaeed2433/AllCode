import sys
input=sys.stdin.buffer.readline

t,s,x=map(int,input().split())
if t==x:
	print("YES")
elif x<t:
	print("NO")
else:
	if (x-t)<s:
		print("NO")
	elif (x-t)%s==0 or (x-t)%s==1:
		print("YES")
	else:
		print("NO")