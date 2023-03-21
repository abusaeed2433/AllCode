import sys
input=sys.stdin.buffer.readline

n,k=map(int,input().split())
arr=[]
brr=[]
trr=[]
while n:
	n-=1
	t,a,b=map(int,input().split())
	if a==1 and b==1:
		arr.append(t)
		brr.append(t)
	elif a==1 and b==0:
		arr.append(t)
		brr.append(-1)
	elif b==1 and a==0:
		arr.append(-1)
		brr.append(t)
print(arr)
print(brr)


