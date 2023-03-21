
#task-1 starts from here
class Node:
	def __init__(self,data,nxt):
		self.data = data
		self.nxt = nxt

class MyList:
	def __init__ (self, a):
		self.head = None	
		for i in range(len(a)-1,-1,-1):
			node = Node(a[i],self.head)
			self.head = node
	
	#task-2 starts from here

	def showList(self):
		if self.head is None:
			print("List is empty")
			return
		ky = self.head
		print("Printing list keyss:")
		st = ""
		while ky:
			st += str(ky.data)
			if(ky.nxt):
				st+=" -> "
			ky = ky.nxt
		print(st)

	def isEmpty(self):
		return self.head is None

	def clear(self):
		ky = self.head
		while ky:
			self .head = ky.nxt
			ky = None
			ky = self.head
		print("List is deleted")

	def insert(self,newElement):
		if self.head is None:
			self.head = Node(newElement,None)
		ky = self.head
		isMatched=False
		while ky:
			if(ky.data == newElement):
				isMatched = True
				break
			ky = ky.nxt
		if(isMatched==True):
			print("Key exists")
		else:
			ky = self.head
			while ky.nxt:
				ky = ky.nxt
			ky.nxt = Node(newElement,None)

	def insertIndex(self,newElement,index):
		ky = self.head
		isMatched=False
		while ky:
			if(ky.data == newElement):
				isMatched = True
				break
			ky = ky.nxt
		if(isMatched==True):
			print("Key exists")
		else:
			if index==0:
				node = Node(newElement,self.head)
				self.head = node
				return
			ind = 0
			ky = self.head
			prev = ky
			while ky.nxt and ind<index-1:
				ky = ky.nxt
				ind+=1
			if(ind==index-1):
				#val = ky.nxt.nxt
				ky.nxt = Node(newElement,ky.nxt)
			else:
				ky.nxt = Node(newElement,None)

	def remove(self, dKey):
		ky = self.head
		isMatched=False
		prev = ky
		while ky:
			if(ky.data == dKey):
				isMatched = True
				prev.nxt = ky.nxt
				break
			prev = ky
			ky = ky.nxt

#case-3 starts from here
def removeEven(lst):
	ky = lst.head
	arr=[]
	while ky:
		temp = ky.data
		if(temp%2==0):
			arr.append(temp)
		ky = ky.nxt
	newList = MyList(arr)
	print("Printing newList Data")
	ky = newList.head
	ans=""
	while ky:
		ans += str(ky.data)
		if(ky.nxt):
			ans+="->"
		ky = ky.nxt
	print(ans)


def isInList(lst,num):
	ky = lst.head
	isFound = False
	while ky:
		if(ky.data == num):
			isFound = True
		ky = ky.nxt
	return isFound


def reverseList(lst):
	prev = None
	cur = lst.head
	while cur is not None:
		nxt = cur.nxt
		cur.nxt = prev
		prev = cur
		cur = nxt
	lst.head = prev
	lst.showList()


def sortList(lst):
	arr =[]
	ky = lst.head
	while ky:
		arr.append(ky.data)
		ky = ky.nxt
	arr.sort()
	lst = MyList(arr)
	lst.showList()


def findSum(lst):
	sm = 0
	ky = lst.head
	while ky:
		sm+=ky.data
		ky = ky.nxt	
	return sm


#1 2 5 3 6
def rotateList(lst,dir,k):
	n =0
	ky = lst.head
	last=None
	while ky:
		last = ky
		ky = ky.nxt
		n+=1
	
	k=k%n
	if(k==0):
		lst.showList()
		return

	if(dir=="right"):
		k=n-k
	ky = lst.head
	ind = 0
	p1=None
	while ky:
		if(ind==k-1):
			p1 = ky
		ky = ky.nxt
		ind+=1
		if(ind==k):
			break
	last.nxt = lst.head
	lst.head = ky
	p1.nxt = None
	lst.showList()






#task-1 test starts from here
arr = [1,2,3,4,5]
mList = MyList(arr)#initializing list

#task-2 test starts from here
mList.showList()#Printing list elements:1 2 3 4 5

print(mList.isEmpty()) # False

mList.clear()#list become empty

print("\nShowing list after clearing:")
mList.showList()#List is empty

mList = MyList(arr)#Initializing again after clearing

mList.insert(8)# 7 is inserted in last

print("\nShowing list after inserting 7 at end:")
mList.showList()# print 1 - 7

print("\nShowing list after inserting 123 at index 1:")
mList.insertIndex(123,1)# index is 0 based

mList.showList()# 1,123,2-7

print("\nShowing list after after removing 2:")
mList.remove(5)

mList.showList()#1,123,2,3,4,7


#case-3 starts from here
#1
print("\n< - - Case-3 starting from here - ->")
arr = [1,2,5,3,8]
aList = MyList(arr)
removeEven(aList)#2->8


#2
arr = [1,2,5,3,8]
aList = MyList(arr)
print()
print("Is element in list: ",isInList(aList,7))#False


#3
lst=MyList([1,2,5,3,8])
print("\nReversed List:")
reverseList(lst)#8 3 5 2 1


print("\nSorted List:")
#4
lst = MyList([1,2,5,3,8])
sortList(lst)# 1 2 3 5 8


print()
#5
lst = MyList([1,2,5,3,8])
print("Sum of the list is: ",findSum(lst))


#6
#1 2 5 3 8
lst = MyList([1,2,5,3,8])
rotateList(lst,"right",1)# 8 1 2 5 3