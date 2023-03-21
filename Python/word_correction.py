n=int(input())
s=input()
x=[]
for i in range(0,n):
    x.append(s[i])
for i in range(0,n-1):
    if s[i]=="a" or s[i]=="e" or s[i]=="i" or s[i]=="o" or s[i]=="u" or s[i]=="y":
        if s[i+1]=="a" or s[i+1]=="e" or s[i+1]=="i" or s[i+1]=="o" or s[i+1]=="u" or s[i+1]=="y":
            x[i+1]=0
        else:
            continue
    else:
        continue
for i in range(0,len(x)):
    if x[i]!=0:
        print(x[i],end='')
    else:
        continue
