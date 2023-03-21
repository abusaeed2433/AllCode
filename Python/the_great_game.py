from math import*

def winner(a,b):
	if a=="[]":
		if b=="()":
			return 1
		elif b=="[]":
			return 0
		else:
			return -1
	elif a=="8<":
		if b=="()":
			return -1
		elif b=="[]":
			return 1
		else:
			return 0
	else:
		if b=="()":
			return 0
		elif b=="[]":
			return -1
		else:
			return 1

s1=input()
s2=input()
i=0
ans=0
while i<len(s1):
	ans+=winner(s1[i:i+2],s2[i:i+2])
	i+=2
if ans==0:
	print("TIE")
elif ans<0:
	print("TEAM 2 WINS")
else:
	print("TEAM 1 WINS")