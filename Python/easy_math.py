import sys
input=sys.stdin.buffer.readline
from math import*

t=int(input())
while t:
	t-=1
	n,m,a,d=map(int,input().split())
	b=a+d
	c=b+d
	e=c+d
	d=e+d
	d1=(n//a)+(n//b)+(n//c)+(n//d)+(n//e)-(n//(a*b))-(n//(a*c))-(n//(a*d))-(n//(a*e))-(n//(b*c))-(n//(b*d))-(n//(b*e))-(n//(c*d))-(n//(c*e))-(n//(d*e))+(n//(a*b*c))+(n//(a*b*d))+(n//(a*b*e))+(n//(a*c*d))+(n//(a*c*e))+(n//(a*d*e))+(n//(b*c*d))+(n//(b*c*e))+(n//(b*d*e))+(n//(c*d*e))-(n//(a*b*c*d))-(n//(b*c*d*e))-(n//(a*c*d*e))-(n//(a*b*d*e))-(n//(a*b*c*e))+(n//(a*b*c*d*e))
	d2=(m//a)+(m//b)+(m//c)+(m//d)+(m//e)-(m//(a*b))-(m//(a*c))-(m//(a*d))-(m//(a*e))-(m//(b*c))-(m//(b*d))-(m//(b*e))-(m//(c*d))-(m//(c*e))-(m//(d*e))+(m//(a*b*c))+(m//(a*b*d))+(m//(a*b*e))+(m//(a*c*d))+(m//(a*c*e))+(m//(a*d*e))+(m//(b*c*d))+(m//(b*c*e))+(m//(b*d*e))+(m//(c*d*e))-(m//(a*b*c*d))-(m//(b*c*d*e))-(m//(a*c*d*e))-(m//(a*b*d*e))-(m//(a*b*c*e))+(m//(a*b*c*d*e))
	print(d1,d2)
	d1=n-d1
	d2=m-d2
	print(d2-d1)