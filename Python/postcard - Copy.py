

s=input()
k=int(input())
n=len(s)
letter=0
snow=0
cand=0
for x in s:
	if x=="?":
		cand+=1
	elif x=="*":
		snow+=1
	else:
		letter+=1
if k==letter:
	for x in s:
		if x=="*" or x=="?":
			continue
		else:
			print(x,end='')
elif k<letter:
	if (snow+cand)>=(letter-k):
		c=letter-k
		ans=""
		for j in range(n-1):
			if s[j]!="*" and s[j]!="?":
				if s[j+1]=="*" or s[j+1]=="?":
					if c!=0:
						c-=1
					else:
						ans+=s[j]
				else:
					ans+=s[j]
		if s[-1]!="*" and s[-1]!="?":
			ans+=s[-1]
		print(ans)
	else:
		print("Impossible")
else:
	if snow>0:
		ans=""
		c=k-letter
		for j in range(n-1):
			if s[j]!="*" and s[j]!="?":
				ans+=s[j]
				if s[j+1]=="*" and c!=0:
					for l in range(c):
						ans+=s[j]
					c=0
				else:
					continue
			else:
				continue
		if s[-1]!="*" and s[-1]!="?":
			ans+=s[-1]
		print(ans)
	else:
		print("Impossible")



