import os

sa=input()
sa=len(sa)-2
sb=input()
sb=len(sb)-2
sc=input()
sc=len(sc)-2
sd=input()
sd=len(sd)-2
arr=[sa,sb,sc,sd]
arr.sort()
#print(arr)
z=[]
if arr[0]<=arr[1]//2 and arr[0]<=arr[2]//2 and arr[0]<=arr[3]//2:
	if arr[0]==sa:
		z.append("A")
	elif arr[0]==sb:
		z.append("B")
	elif arr[0]==sc:
		z.append("C")
	else:
		z.append("D")
if arr[0]<=arr[3]//2 and arr[1]<=arr[3]//2 and arr[2]<=arr[3]//2:
	if arr[3]==sa:
		z.append("A")
	elif arr[3]==sb:
		z.append("B")
	elif arr[3]==sc:
		z.append("C")
	else:
		z.append("D")
if len(z)==1:
	print(z[0])
else:
	print("C")
