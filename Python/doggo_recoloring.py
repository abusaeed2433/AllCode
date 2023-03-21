n=int(input())
s=input()
s=sorted(s)
z=0
for i in range(0,n-1):
    if s[i]==s[i+1]:
        z=1
        break
    else:
        continue
if n==1 or z==1:
    print("YES")
else:
    print("NO")
