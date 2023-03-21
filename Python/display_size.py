import math
n=int(input())
c=math.sqrt(n)
c=int(c)
for i in range(c,n+1):
    if (c*i)==n:
        print(c,i)
        break
    elif (c*i)>n:
        c=c-1
        for j in range(c,n+1):
            if (c*j)==n:
                print(c,j)
                break;
            
    else:
        continue
        
