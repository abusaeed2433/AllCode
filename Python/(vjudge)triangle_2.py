#codeimport sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	arr.sort(reverse=True)
	count=0
	for i in range(n-2):
		for j in range(i+1,n-1):
			for k in range(j+1,n):
				if arr[j]+arr[k]>arr[i]:
					count+=1
				else:
					break
	print(count)