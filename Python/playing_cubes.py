import sys
input=sys.stdin.buffer.readline

n,m=map(int,input().split())
print(max(n,m)-min(n,m)-1)
