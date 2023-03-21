n=int(input())
x=[]
for i in range(0,n):
    s=input()
    for j in range(0,len(s)):
        if s[j]=="1":
            x.append(j+1)
        else:
            continue
x.sort()
y=1
z=1
for i in range(0,len(x)-1):
    if x[i]==x[i+1]:
        y+=1
    else:
        if y>=z:
            z=y
            y=1
        else:
            y=1
if len(x)==0:
    print("0")
else:
    print(max(y,z))
