
n=int(input())
pos=0
neg=0
zero=0
arr=list(map(int,input().split()))
for a in arr:
	if a>0:
		pos+=1
	elif a<0:
		neg+=1
	else:
		zero+=1
print(pos/n)
print(neg/n)
print(zero/n)
