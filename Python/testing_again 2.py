variable = 10

#print("This is a: {}".format(id(hex(variable))))

def function():
    v =  13
    return id(hex(v))
    #print("This is a: {}".format(id(hex(variable))))

#function()
def func():
    count,count1=0,0
    for i in range(1000):
        var1 = id(hex(variable))
        var2 = function()
        if(var1==var2):
            count+=1
    print(count,1000-count)
func()
