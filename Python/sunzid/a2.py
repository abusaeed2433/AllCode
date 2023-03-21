
def rotateLeft(source,k):
	n = len(source)
	arr=[0]*n
	k = k%n
	print(arr)
	for i in range(n):
		arr[i-k]=source[i]
	return arr


source = [1,2,3,4]
source = rotateLeft(source,2)
print(source)
