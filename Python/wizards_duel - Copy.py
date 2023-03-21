n=int(input())
p=int(input())
q=int(input())
if n%(p+q)==0:
    print(int(((n*p)/(p+q))))
else:
    print(((n*p)/(p+q)))
