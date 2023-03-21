a=int(input())
b=int(input())
c=int(input())
d=[(a*b*c),(a*(b+c)),(c*(a+b)),(a+(b*c)),(c+(a*b)),(a+b+c)]
print("%d"%max(d))
