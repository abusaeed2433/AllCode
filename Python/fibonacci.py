from collections import defaultdict

x=["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]

d=defaultdict(int)
count=2
for i in range(len(x)-1,-1,-1):
    d[x[i]]=count
    count+=1
print(d)

ans=0
for i in range(len(s)):
    ans+=d[s[i]]
print(ans)