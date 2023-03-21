
def createDict(s):
	d = dict()
	val,i,index,di = 0,0,0,0
	while(i<len(s)):
		if(s[i]==','):
			val += int(s[index:i])
			index=i+1
			d[di]=val
			di+=1
		i+=1
	val+=int(s[index:])
	d[di]=val
	print(d)


s = input()
createDict(s)