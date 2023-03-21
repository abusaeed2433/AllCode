
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

	def showList(self):
		if self.head is None:
			print("List is empty")
			return
		ky = self.head
		print("Printing list keyss:")
		while ky:
			print(ky.data)
			ky = ky.nxt


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






       	




arr = [1,2,3,4,5]
mList = MyList(arr)#initializing list

mList.showList()#Printing list elements:
#1
#2
#3
#4
#5

print(mList.isEmpty()) # False


mList.clear()#list become empty

print("\nShowing list after clearing:")
mList.showList()#List is empty

mList = MyList(arr)#Initializing again after clearing

mList.insert(7)# 7 is inserted in last

print("\nShowing list after inserting 7 at end:")
mList.showList()# print 1 - 7

print("\nShowing list after inserting 123 at index 1:")
mList.insertIndex(123,1)# index is 0 based

mList.showList()

print("\nShowing list after after removing 2:")
mList.remove(5)

mList.showList()

