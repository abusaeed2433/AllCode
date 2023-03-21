

def removeAll(source,size,obj):
	p=0
	arr = [0]*size
	for i in range(size):
		if(source[i]!=obj):
			arr[p]=source[i]
			p+=1
	return arr


source = [1,2,1,4,1,1]
source = removeAll(source,6,1)
print(source)
