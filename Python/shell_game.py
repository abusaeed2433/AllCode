import sys
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')

x=int(input())
for i in range(0,3):
    a,b=list(map(int,input().split()))
    if a==x:
        x=b
    elif b==x:
        x=a
    else:
        continue
print(x)
        
