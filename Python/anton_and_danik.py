n=int(input())
s=input()
x=0
y=0
for i in range(0,n):
    i=int(i)
    if s[i]=="A":
        x=x+1
    else:
        y=y+1
if x==y:
    print("Friendship")
elif x<y:
    print("Danik")
else:
    print("Anton")
