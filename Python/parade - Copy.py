import sys
from math import*
input=sys.stdin.buffer.readline

t=int(input())
max_r=0
max_l=0
total_r=0
total_l=0
col_pos1=0
col_pos2=0
for i in range(t):
	l,r=map(int,input().split())
	total_l+=l
	total_r+=r
	if l<r:
		if max_r<(r-l):
			max_r=r-l
			col_pos2=i+1

	else:
		if max_l<(l-r):
			max_l=l-r
			col_pos1=i+1
ans=int(fabs(total_r-total_l))
ans1=int(fabs(total_r-max_r-(total_l+max_r)))
ans2=int(fabs(total_r+max_l-(total_l-max_l)))
#print(ans,ans1,ans2)
if ans>=ans1 and ans>=ans2:
	print("0")
elif ans1>=ans and ans1>=ans2:
	print(col_pos2)
else:
	print(col_pos1)
					#unknown_2433
