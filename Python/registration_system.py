

t=int(input())
dic={}#learning dictonary
for i in range(0,t):
    s=input()
    x=dic.get(s,0)#if there is no s in dic it will return 0
    if x==0:
        print("OK")
        dic[s]=1#appending s in dic
    else:
        dic[s]=x+1
        print("%s%d"%(s,x))
    
