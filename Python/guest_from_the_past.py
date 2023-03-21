import sys
input=sys.stdin.buffer.readline
import os

n=int(input())
a=int(input())
b=int(input())
c=int(input())
if n>=b:
	rest=n-b
	if max((b//a),1)==1:
		rest=n-(b-c)
		ans=max(((n//a)),(max((b//a),1)+((rest-b)//(b-c))))
		if rest>=b:
			print(ans+1)
		else:
			print(ans)
	else:
		print(max(((n//a)),(max((b//a),1)+(rest//(b-c)))))
else:
	print(n//a)
