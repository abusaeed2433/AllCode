import sys
input=sys.stdin.buffer.readline

t=int(input())
while t:
    t-=1
    n=int(input())
    arr=list(map(int,input().split()))
    ans=[arr[0]]
    for i in range(1,n-1):
        if arr[i]>arr[i-1] and arr[i]>arr[i+1]:
            ans.append(arr[i])
        elif arr[i]<arr[i-1] and arr[i]<arr[i+1]:
            ans.append(arr[i])
    ans.append(arr[-1])
    print(len(ans))
    for x in ans:
        print(x,end=' ')
    print()