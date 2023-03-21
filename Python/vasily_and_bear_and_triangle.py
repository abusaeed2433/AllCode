import sys
input=sys.stdin.buffer.readline

x,y=map(int,input().split())
if x>0 and y>0:
	print("0",x+y,x+y,"0")
elif x>0 and y<0:
	print("0",-x+y,x-y,"0")
elif x<0 and y>0:
	print("0",-x+y,x-y,"0")
else:
	print("0",x+y,x+y,"0")
