import os
from math import*

s=input()
s=list(s)
pos=s.index(".")-1
if s[pos]=="9":
	print("GOTO Vasilisa.")
else:
	if int(s[pos+2])<5:
		for i in range(pos+1):
			print(s[i],end='')
	else:
		for i in range(pos):
			print(s[i],end='')
		print(int(s[pos])+1)

