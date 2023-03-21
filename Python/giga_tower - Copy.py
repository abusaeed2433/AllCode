

n=int(input())
s=str(n)
z=0
for i in range(0,len(s)):
    if s[i]=="8":
        z=1
        break
    else:
        continue
if z==1:
    print("0")
else:
    
    print(8-(int(s[len(s)-1])))
    
