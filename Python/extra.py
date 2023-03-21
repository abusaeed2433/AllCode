

def arrange(dict):
	ans = []
	for cntrName in dict:
		cntr = dict[cntrName]
		id0 = 1 if (cntrName=="American") else (2 if (cntrName=="Korean") else 3)
		for gender in cntr:
			subdct = cntr[gender]
			if(isinstance(subdct, str)):
				uid = str(id0)+str((1 if isActor else 2)) + ("0" if len(name)>=10 else "00")+str(len(subdct))
				ans.append((subdct,uid))
			else:
				isActor = (gender=="Actors")
				for name in subdct:
					uid = str(id0)+str((1 if isActor else 2)) + ("0" if len(name)>=10 else "00") +str(len(name))
					ans.append((name,uid))
	return tuple(ans)








my_dictionary = {
'American': {
	'Actors': ('Tom Cruise', 'Leonardo DiCaprio'),
	'Actresses': ('Scarlett Johansson', 'Angelina Jolie')
	},
'Korean': {
	'Actors': ('Lee in-ho', 'Song Joong-ki','Choi Jin-hyuk')
	},
'German': {
	'Actors': ('David Kross', 'Michael Fassbender'),
	'Actresses': ('Diana Kruger')
	}
}


lst = arrange(my_dictionary)
print(lst)