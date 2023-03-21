

s=input()
k=int(input())
a=list(map(int,input().split()))
x=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
y=[]
ss=0
for i in range(0,len(s)):
    for j in range(0,26):
        if s[i]==x[j]:
            y.append(a[j])
            break
        else:
            continue
for i in range(0,(len(s)+1)):
    ss+=(i*y[i-1])
d=0
for i in range(len(s)+1,len(s)+k+1):
    d+=i
ss+=d*max(a)
print(ss)
