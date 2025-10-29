def outer() :
    global out, x
    x = 5
    out  = x*x
    def inner() :
        x = 3
        out = x*x 
        return out
    y  = inner()
    print(y)

x = 9
outer()
print(out)
print(x)
