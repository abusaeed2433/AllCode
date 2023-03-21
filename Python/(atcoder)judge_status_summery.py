
d=dict()
d["AC"]=0
d["WA"]=0
d["TLE"]=0
d["RE"]=0
t=int(input())
while t:
	t-=1
	s=input()
	d[s]+=1
#print(d)
print("AC x",d["AC"])
print("WA x",d["WA"])
print("TLE x",d["TLE"])
print("RE x",d["RE"])