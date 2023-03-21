def checker(s):
    z=0
    for i in range(0,len(s)-1):
        if s[i]==s[i+1]:
            continue
        else:
            z=1
            break
    return z

t=int(input())
for i in range(0,t):
    s=input()
    z=checker(s)
    if z==0:
        print(s)
    else:
        if s[0]=="0":
            for j in range(0,len(s)):
                print("01",end='')
        else:
            for j in range(0,len(s)):
                print("10",end='')
        print()
