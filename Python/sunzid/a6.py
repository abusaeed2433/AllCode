


def fillArray(n):
	arr = []
	for i in range(n):
		for j in range(n):
			if(j<(n-i)):
				arr.append(j+1)
			else:
				arr.append(0)
	arr = arr[::-1]
	return arr



n = 4
arr = fillArray(n)
print(arr)
