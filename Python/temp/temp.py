
s = input()
#s = list(s)
d = dict()
d["None"]=[]
d["Divisible by 2"] =[]
d["Divisible by 3"] = []
d["Divisible by 5"] = []
def addToDict(num):
  if(num%2==0):
    d["Divisible by 2"].append(num)
  if(num%3==0):
    d["Divisible by 3"].append(num)
  if(num%5==0):
    d["Divisible by 5"].append(num)
  if(num%2!=0 and num%3!=0 and num%5!=0):
    d["None"].append(num)


ini,i = 0,0
while i<len(s):
  if s[i]==',':
    num = int(s[ini:i])
    addToDict(num)
    ini = i+1
  i+=1

num = int(s[ini:])
addToDict(num)
print(d)
