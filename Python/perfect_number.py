import os

n=int(input())
k=19
count=1
while count<n:
	k+=9
	s=0
	for i in range(len(str(k))):
		s+=int(str(k)[i])
	if s==10:
		count+=1
print(k)
