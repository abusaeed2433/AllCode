import sys
import copy
input=sys.stdin.buffer.readline

t=int(input())
while t:
	t-=1
	n=int(input())
	arr=list(map(int,input().split()))
	arr1=copy.deepcopy(arr)
	arr1.sort()
	if arr1[0]==1:
		if max(arr)+1<=2*n:
			ans=[]
			for i in range(n):
				ans.append(arr[i])
				for j in range(arr[i]+1,2*n+1):
					if j not in arr1:
						ans.append(j)
						arr1.append(j)
						break
			if len(set(ans))!=2*n:
				print("-1")
			else:
				for x in ans:
					print(x,end=' ')
				print()
		else:
			print("-1")
	else:
		print("-1")
