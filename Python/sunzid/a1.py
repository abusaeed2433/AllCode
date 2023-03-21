

def shiftLeft(source,k):
	n = len(source)
	for i in range(n):
		if(i<(n-k)):
			source[i] = source[i+k]
		else:
			source[i]=0
	return source


source = [1,2,3,4,5,6,7]
source = shiftLeft(source,3)
print(source)
