

s=input()
x=[]
for i in range(0,len(s)):
    x.append(int(s[i]))
y=0
while len(x)>1:
    y+=1
    d=int(sum(x))
    d=str(d)
    x.clear()
    for i in range(0,len(d)):
        x.append(int(d[i]))
print(y)
