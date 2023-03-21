from math import*
from collections import*

while True:
    try:
        arr = list(map(int,input().split()))
    except EOFError:
        break
    n = arr[0]
    arr.pop(0)
    d = defaultdict(int)
    for i in range(1,n):
        d[int(fabs(arr[i]-arr[i-1]))]=1
    check = True
    for i in range(n-1):
        if d[i+1]!=1:
            check = False
            break
    if check:
        print("Jolly")
    else:
        print("Not jolly")