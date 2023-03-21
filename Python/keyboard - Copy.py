def same(d,a):
    for i in range(0,31):
        if x[i]==a:
            print(x[i-1],end='')
            break
        else:
            continue
def same1(d,a):
    for i in range(0,31):
        if x[i]==a:
            print(x[i+1],end='')
            break
        else:
            continue
x=['q','w','e','r','t','y','u','i','o','p',"a","s",'d','f','g','h','j','k','l',";",'z','x','c','v','b','n','m',',','.','/']
n=input()
s=input()
if n=="R":
    for i in range(0,len(s)):
        same(x,s[i])
else:
    for i in range(0,len(s)):
        same1(x,s[i])
