s=input()
l=len(s)
s=s[::-1]
for i in range(1,l):
    if s[i]!=" ":
        if s[i]=="a" or s[i]=="e" or s[i]=="i" or s[i]=="o" or s[i]=="u" or s[i]=="y" or s[i]=="A" or s[i]=="E" or s[i]=="I" or s[i]=="O" or s[i]=="U" or s[i]=="Y":
           print("YES")
           break
        else:
            print("NO")
            break
    else:
        continue
