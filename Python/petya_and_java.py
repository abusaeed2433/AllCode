
import os
from math import*
s=input()
if len(s)>19:
	print("BigInteger")
elif int(s)>=-128 and int(s)<=127:
	print("byte")
elif int(s)>=-32768 and int(s)<=32767:
	print("short")
elif int(s)>=-2147483648 and int(s)<=2147483647:
	print("int")
elif int(s)>=-9223372036854775808 and int(s)<=9223372036854775807:
	print("long")
else:
	print("BigInteger")