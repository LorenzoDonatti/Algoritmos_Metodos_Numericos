import math

c = [-136,-85,-9,5,1]    """c[0] corresponde a termo independente"""
a = len(c)
i= a-2
x = 100
n=0
while(n<=20):
    y = c[a-1]
    while(i>=0):
        if(i == a-2):
            y2 = y
        y = c[i] + y*x
        if(i>0):
            y2 = y + y2 * x
        i = i-1

    print(x)
    x = x - (y/y2)
    i = a - 2
    n = n+1
print("o valor do x eh",x)



