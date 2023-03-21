from collections import defaultdict


def isConditionOK(arr):
	n = len(arr)
	d = defaultdict(int)
	for i in range(n):
		d[arr[i]]+=1

	arr = list(set(arr))#removing duplicate
	n=len(arr)
	for i in range(n-1):
		for j in range(i+1,n):
			if(d[arr[i]]!=1 and d[arr[i]]==d[arr[j]]):
				return True
	return False


print("Enter array elements:")
arr = list(map(int,input().split()))
print(isConditionOK(arr))