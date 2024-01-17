# nearesr fibonacci
import math as m
def root(n):
    k=m.ceil(m.sqrt(n))
    if k**2==n:
        return True
    else:
        return False
def fib(n):
    if root(5*n**2+4)==1 or root(5*n**2-4)==1:
        return True
    else:
        return False

n=int(input())
i=n+1
while(1):
    if fib(i)==1:
        break
    else:
        i=i+1
t=n-1
while(1):
    if fib(i)==1:
        break
    else:
        t=t-1
if (abs(n-t)>abs(i-n)):
        print(i+1)
elif abs(n-t)==abs(i-n):
    # print("isdbjf")
    print(t-1,i+1)
else:
    print(t-1)