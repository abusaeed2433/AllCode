import sys
input=sys.stdin.buffer.readline


n=int(input())
arr=list(map(int,input().split()))
pos=arr.index(max(arr))+1
arr.sort(reverse=True)
print(pos,arr[1])