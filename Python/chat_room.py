

s=input()
x="hello"
k=0
y=0
for i in range(0,len(s)):
    if s[i]==x[k]:
        k+=1
        y+=1
        if y==5:
            break
        else:
            continue
    else:
        continue
if y==5:
    print("YES")
else:
    print("NO")
