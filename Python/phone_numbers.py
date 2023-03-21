from math import*
import copy



def func(arr):
	arr=list(set(arr))
	arr=sorted(arr,key=len)
#	print(arr)
	c=len(arr)
	for i in range(c-1):
		for j in range(i+1,c):
#			print(arr[i],arr[j])
			istrue=True
			for k in range(0,len(arr[i])):
				if arr[i][len(arr[i])-1-k]!=arr[j][len(arr[j])-1-k]:
					istrue=False
					break
			if istrue==True:
				arr[i]=-1
#				print("a")
				break
	arr=list(filter(lambda x:x!=-1,arr))
	return arr


n=int(input())
d=dict()
name=[]
for _ in range(n):
	arr=list(map(str,input().split()))
	if arr[0] not in name:
		d[arr[0]]=arr[2:]
		name.append(arr[0])
	else:
		d[arr[0]]+=arr[2:]
#print(d)
#print(name)
for i in range(len(name)):
#	d[name[i]]=sorted(d[name[i]],key=len)
	arr=copy.deepcopy(d[name[i]])
	d[name[i]]=func(arr)
#	print(d[name[i]])
#print(d[name])
print(len(name))
for i in range(len(name)):
	print(name[i],len(d[name[i]]),end=' ')
	for x in d[name[i]]:
		print(x,end=' ')
	print()