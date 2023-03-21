

ans = 1
for i in range(1,21):
	ans*=i
r = 1
for i in range(1,17):
	r*=i

nr = 1
for i in range(1,5):
	nr*=i
val = ans/(r*nr)
print(ans," - ",r," - ",nr," - ",val)