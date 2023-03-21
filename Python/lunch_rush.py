import sys
input=sys.stdin.buffer.readline



n,k=map(int,input().split())
joy=-1000000000
while n:
	n-=1
	f,t=map(int,input().split())
	if t<=k:
		temp_joy=f
	else:
		temp_joy=f-t+k
	if joy<temp_joy:
		joy=temp_joy
print(joy)



