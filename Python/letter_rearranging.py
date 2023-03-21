t=int(input())
for i in range(0,t):
    n=input()
    n=sorted(n)
    if n[0]==n[len(n)-1]:
        print("-1")
    else:
        for j in range(0,len(n)):
            print(n[j],end='')
        print()
