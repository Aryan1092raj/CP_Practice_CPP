def f() :
    x = 5
    g()
    print("in f ",x)
def g() :
    x = 7
    print("in g ",x)
    h()
def h() :
    print("in h ",x)
x = 3
f()
print("in main ",x)