import math

a = 0
fa = math.exp(a)
b = 1
fb = math.exp(b)
n = 10
h = (b-a)/n
x = a + h
i = 1
fxi = 0

while(i<n):
    fx = math.exp(x)
    fxi = fxi + fx
    x = x + h
    i = i + 1

res = (h/2)*(fa + fb + 2*fxi)
print("o valor da integral e:",res)



