from sympy import solve
a=input("x的平方项系数:")
b=input("x的系数:")
c=input("常数项系数:")
equation="%s*x**2+%s*x+%s"%(a,b,c)
print("x的解为",solve(equation))
