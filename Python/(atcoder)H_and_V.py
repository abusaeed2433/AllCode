
def counter(i,j,total):
	count=0
	for k in range(w):
		if k!=j:
			if row[i][k]=="#":
				count+=1
	for k in range(h):
		if col[j][k]=="#":
			count+=1
	return total-count
def single_counter(s,total):
	count=0
	for i  in range(len(s)):
		if s[i]=="#":
			count+=1
	return total-count

h,w,k=map(int,input().split())
row=[[]]*h
col=[]
total=0
for i in range(w):
	col.append([i])

for i in range(h):
	s=input()
	row[i]=list(s)
	for j in range(w):
		col[j].append(s[j])
		if s[j]=="#":
			total+=1
for i in range(w):
	col[i].pop(0)
ans=0
if k==total:
	ans=1
for i in range(h):
	for j in range(w):
		print(counter(i,j,total),end=' ')
		if counter(i,j,total)==k:
			ans+=1
	print()
for i in range(h):
	if single_counter(row[i],total)==k:
		ans+=1
for i in range(w):
	if single_counter(col[i],total)==k:
		ans+=1
print(ans)

