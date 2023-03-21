

s=input()
s=sorted(s)
s=list(filter(lambda x:x>="a" and x<="z",s))
if len(s)==0:
    print("0")
else:
    x=1
    for i in range(0,len(s)-1):
        if s[i]==s[i+1]:
            continue
        else:
            x+=1
    print(x)
