
n=int(input())
arr=list(map(int,input().split()))
arr.sort(reverse=True)
c=arr[0]
arr=list(filter(lambda x:x==c,arr))
print(len(arr))