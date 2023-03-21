import sys
input=sys.stdin.buffer.readline

def calc(arr,pos,pos1,pos2,var):
	s=0
	for i in range(14):
		val=arr[i]+var
		if i==pos:
			if var%2==0:
				s+=var
		if i<=pos2 and i>pos:
			val+=1
			if val%2==0:
				s+=val
		elif i<pos1:
			val+=1
			if val%2==0:
				s+=val
	return s


arr=list(map(int,input().split()))
ans=0
for i in range(14):
	var=arr[i]//14
	extra=arr[i]%14
	pos2=min(13,i+extra)
	pos1=-1
	if pos2==13:
		pos1=extra-(13-i)
#	print(var,extra,pos1,pos2)
	val1=calc(arr,i,pos1,pos2,var)
	if val1>ans:
		ans=val1
	print(var,extra,pos1,pos2,i,val1)
print(ans)
