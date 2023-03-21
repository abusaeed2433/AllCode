

arr=[0,1,2,10,4,1,0,56,2,0,13,0,56,0,4]
brr=list(filter(lambda x:x==0,arr))
arr=list(filter(lambda x:x!=0,arr))
arr.sort()
arr+=brr
print(arr)