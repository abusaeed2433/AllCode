n=int(input())
s=input()
s=sorted(s)
x=0
if n>26:
    print("-1")
else:
    for i in range(0,n-1):
        if s[i]==s[i+1]:
            x+=1
        else:
            continue
    print(x)
