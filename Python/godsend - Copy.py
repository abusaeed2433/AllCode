import sys
input=sys.stdin.buffer.readline

n=int(input())
arr=list(map(int,input().split()))
odd=0
for x in arr:
	if x%2==0:
		continue
	else:
		odd=1
		break

if sum(arr)%2==1:
	print("First")
else:
	if odd>0:
		print("First")
	else:
		print("Second")
				#unknown_2433