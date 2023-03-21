
s,t=map(int,input().split())
a,b=map(int,input().split())
m,n=map(int,input().split())
mrr=list(map(int,input().split()))
nrr=list(map(int,input().split()))
acount=0
bcount=0
for x in mrr:
	if (x+a)>=s and (x+a)<=t:
		acount+=1
	else:
		continue
for x in nrr:
	if (x+b)>=s and (x+b)<=t:
		bcount+=1
	else:
		continue
print(acount)
print(bcount)