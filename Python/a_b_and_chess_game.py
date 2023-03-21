

w=0
b=0
for i in range(8):
	#print(b,w)
	s=input()
	for x in s:
		if x=="." or x=="K" or x=="k":
			continue
		elif x=="Q":
			w+=9
		elif x=="R":
			w+=5
		elif x=="B" or x=="N":
			w+=3
		elif x=="P":
			w+=1
		elif x=="q":
			b+=9
		elif x=="r":
			b+=5
		elif x=="b" or x=="n":
			b+=3
		elif x=="p":
			b+=1
if b>w:
	print("Black")
elif w>b:
	print("White")
else:
	print("Draw")