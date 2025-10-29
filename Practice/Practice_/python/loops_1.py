n = int(input("Enter upto which Number : "))

def fact(n) :
    fact = 1
    for i in range(1,n+1) :
        fact = fact*i
    return fact
for i in range(1,n+1) :    
    print("FACTORIAL OF ",i," : ",fact(i))