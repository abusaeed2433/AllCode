
current_sem_data  = {"John":[4.0,3.7,4.0], "Tom":[3.3,3.7,4.0], "Harry":[3.3,3.7,4.0]}
previous_sem_data = {"John":[3.88,90], "Tom":[3.52, 70], "Harry":[3.25,85]}

s = input()
index=0
if(s=="Tom"):
	index=1
elif(s=="Harry"):
	index=2

current_total_GPA = 0
for i in range(len(current_sem_data[s])):
	current_total_GPA += (current_sem_data[s][i]*3)
previous_total_GPA = previous_sem_data[s][0]*previous_sem_data[s][1]

total_credit = previous_sem_data[s][1]+9
CGPA = (current_total_GPA+previous_total_GPA) / total_credit


temp = "*****Data for "+s+"*****"
print(temp)
print("Previous semester's completed credits:",previous_sem_data[s][1])
print("Previous semester's CGPA:",previous_sem_data[s][0])
print("Total credit completed including current semester:",total_credit)
print("Current semester's total GPA:",current_total_GPA)
print("Current semester's CGPA:",CGPA)
