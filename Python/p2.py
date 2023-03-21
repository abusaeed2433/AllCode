
from collections import defaultdict


def replaceRepeated(s):
	d = defaultdict(int)
	for i in range(len(s)):
		d[s[i]]+=1
	out=""
	for i in range(len(s)):
		if(d[s[i]]>1):
			out+="#"
		else:
			out+=s[i]
	return out


s = input()

ns = replaceRepeated(s)
print(ns)