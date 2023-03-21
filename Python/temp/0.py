

#assume 1k read per app open
#assume 1write per app open
#assume 1delete per app open
#assume 1mb transfer per app open
#assume 1kb storage for each person
#assume 250kb for "cd"
#assume one class use 1mb storage
#assume each download transfer 250kb



while(True):
	print("GB used = ",end='')
	gb = int(input())
	rtdb = fst = 0
	if(gb>1):
		rtdb = (gb-1)*5
		fst = (gb-1)*.108

	print("Number of active user/day = ",end='')
	n = int(input())

	t_download = (30*2*(n/100))/1000
	#t_download = 30*5*(n/4)4*000) #GB per month 4n = 1mb
	tcc=0
	if(t_download>10):
		tcc += (t_download-10)

	rc = n*2*1000
	rcc = 0
	if rc>50000:
		rcc += 30*(((rc-50000)/100000)*.036)

	wc = n*2
	wcc=0
	if wc>20000:
		wcc += 30*(((wc-20000)/100000)*.108)

	dc = n*2
	dcc=0
	if dc>20000:
		dcc += 30*(((dc-20000)/100000)*.012)

	print("RTDB = ",rtdb+tcc)
	print("\t","storage: ",rtdb,"transfer: ",t_download,"transfer cost: ",tcc)
	print("FIRE = ",fst+rcc+wcc+dcc)
	print("\t","storage: ",fst,"read: ",rcc," write: ",wcc," delete: ",dcc)
	print()



# print("Number of read = ",end='')
# rc = int(input())

# print("Number of write = ",end='')
# wc = int(input())

# print("Number of delete = ",end='')
# dc = int(input())

# print("size of download/day = ",end='')
# ds = int(input())


