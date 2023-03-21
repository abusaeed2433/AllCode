

n,k=map(int,input().split())
pas=[]
for i in range(n):
	s=input()
	pas.append(s)
s=input()
arr1=list(filter(lambda x:len(x)<len(s),pas))
best=len(arr1)
arr2=list(filter(lambda x:len(x)<=len(s),pas))
worst=len(arr2)
arr3=list(filter(lambda x:x==s,pas))
same=len(arr3)
worst-=same
#print(best,worst)
if worst==0:
	print((best+5*(best//k))+1,"1")
else:
	print((best+5*(best//k))+1,worst+5*((worst)//k)+1)
			#unknown_2433
