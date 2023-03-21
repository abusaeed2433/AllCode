

n=int(input())
s=input()
count=0
t=0
for i in range(0,n//2):
    if s[t]==s[t+1]:
        count+=1
    t+=2
print(count)
t=0
for i in range(0,n//2):
    if s[t]==s[t+1]:
        print("ab",end='')
    else:
        print(s[t]+s[t+1],end='')
    t+=2
