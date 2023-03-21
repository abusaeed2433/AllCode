
def takeAndShow(d):
	while True:
		s = input()
		if(s=="STOP"):
			break
		else:
			ans=[]
			for key in d:
				lst = list(d[key])
				if(s in lst):
					ans.append(key)
			print(ans)


given_dict = { 'Mike' : ['CSE110','ENG101','MAT110'],
'Simon' : ['CSE111','PHY111','MAT110', 'CSE230'],
'Shawn' : ['CSE110','ENG101','MAT120','CSE230'],
'Alice' : ['CSE110','ENG091','MAT092']}

takeAndShow(given_dict)
