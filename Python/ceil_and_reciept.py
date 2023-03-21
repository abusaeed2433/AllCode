import sys
input=sys.stdin.buffer.readline
from math import*


t=int(input())
while t:
	t-=1
	n=int(input())
	ans=0
	x=[1,2,4,8,16,32,64,128,256,512,1024,2048]
	while n>0:   
		check=True
		for i in range(12):
			if n<x[i]:         # যদি x এর কোনো মানের চেয়ে n ছোট হয় তাহলে 
				n-=x[i-1]	   # n থেকে x[i-1] মান থেকে বিয়োগ করছি এবং ans ১ বাড়ছে।
				ans+=1
				check=False		
				break
		if check==True: 	# যদি কোনো মানের চেয়ে ছোট না হয় তাহলে n এর মান ২০৪৮ এর বড়।
			ans+=(n//2048)
			n-=(n//2048)*2048
	print(ans)

