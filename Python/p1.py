
s = input()
arr=[]
ini,i=0,0
while i<len(s):
	if(s[i]==','):
		arr.append(int(s[ini:i]))
		ini=i+1
	i+=1
arr.append(int(s[ini:]))
print("Input list:",arr)
avg1 = sum(arr)/len(arr)
print("Average of input list:",avg1)
brr=[]
for i in range(len(arr)):
	if(arr[i]>avg1):
		brr.append(arr[i])
print("New list:",brr)
avg2 = 0
if(len(brr)!=0):
	avg2 = sum(brr)/len(brr)
print("Average of new list:",avg2)
arr.sort()
print("2nd highest number of the list1:",end=' ')
if(len(arr)>1):
	print(arr[-2])
	if avg2>arr[-2]:
		print("It's a miracle!!!")
	else:
		print("Just another normal day!!!")
else:
	print("Not found")
	print("Input list is too small")
