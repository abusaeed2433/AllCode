
t=int(input())
a=list(map(int,input().split()))
st=0
mst=0
i=0
y=set()
while i<2*t:
    if a[i] in y:
        if mst<=st:
            mst=st
            st-=1
        else:
            st-=1
        y.remove(a[i])
    else:
        y.add(a[i])
        st+=1
    i+=1
print(mst)
