import math

a = 0.0
b = 1.0
e = 0.00000000001
fa = math.exp(-a) - a
fb = math.exp(-b) - b
cont = 0
erro = 1

if (fa * fb < 0):
    while (abs(erro)> e):
        x = (a+b) / 2
        fx = math.exp(-x)-x
        erro = (a-x) / x
        if (fa * fx > 0):
            a = x
            fa = math.exp(-a)-a
            cont = cont+1
        else:
            b = x
            fb = math.exp(-b)-b
            cont = cont + 1
        print("a =", a, "b",b,"x=" ,x, "erro =\n",erro)

    print("a raiz do intervalo e",x, "com",cont," interacoes\n")

else:
    print("o intervalo nao possui raizes")

