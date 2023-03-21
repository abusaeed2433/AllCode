
d = dict()
def addToDict(word):
  size = len(word)
  if(size not in d):
    d[size] = []
  d[size].append(word)

s =""
while True:
    try:
        line = input()
        if(line[len(line)-1]=='.'):
          s+= " "+line
          break
    except EOFError:
        break
    s += line

ini,i = 0,0
while i<len(s):
  if (s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z'):
    i+=1
  else:
    if(s[ini:i]!=""):
      addToDict(s[ini:i])
    i+=1
    ini = i

if(s[ini:]!=""):
  addToDict(s[ini:])
print(d)
