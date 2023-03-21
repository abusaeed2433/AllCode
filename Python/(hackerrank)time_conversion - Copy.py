
s=input()
if s[len(s)-2]+s[len(s)-1]=="AM":
	if s[0]+s[1]=="12":
		print("00",end='')
		print(s[2:len(s)-2])
	else:
		print(s[0:len(s)-2])
else:
	if s[0]+s[1]=="12":
		print(s[0:len(s)-2])
	else:
		print(int(s[0]+s[1])+12,end='')
		print(s[2:len(s)-2])