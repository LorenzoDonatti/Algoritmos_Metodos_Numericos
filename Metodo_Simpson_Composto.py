import math

a = 0
fa = (1/math.pi)*math.cos(0)*math.exp(0*math.cos(a))
b = math.pi
fb = (1/math.pi)*math.cos(0)*math.exp(0*math.cos(a))
n = 100020
h = (b-a)/n
x = a + h
par = 0
impar = 0
i = 1
erro = 1
e = 0.00001

while (i < n):
    fx = (1/math.pi)*math.cos(0)*math.exp(0*math.cos(x))
    if(i % 2 == 0):
        par = par + fx
    else:
        impar = impar + fx

    x2 = x
    x = x+h
    erro = abs((x-x2)/x)
    print(x)
    print(erro)
    i = i+1

res = h/3*(fa+fb+2*par+4*impar)

print("o resultado da integral e:",res)





