

n,x,y=list(map(int,input().split()))
s=input()
s=s[len(s)-x:len(s)]
count=0
for i in range(0,len(s)):
    if i==(len(s)-y-1):
        if s[i]=="0":
            count+=1
        else:
            continue
    else:        
        if s[i]=="0":
            continue
        else:
            count+=1
print(count)
