# print("Ravi".rjust(100,"_"))
# print(int(str(bin(12))[2:]))
# import textwrap
# r="This is a really really long list i am very good to write this h"
# t=(textwrap.fill(r,4))

# print(t)
# for i in t:
#     print(i)

# n = int(input())
# arr = list(map(int, input().split()))[:n]
# print(list(sorted(set(arr))))

# Enter your code here. Read input from STDIN. Print output to STDOUT
    # Enter your code here. Read input from STDIN. Print output to STDOUT
# a=['ravi', 'kant']
# a.insert(1,'ravi')
# a.sorted()
# a.append("Rac")

# print(a)

# n=complex(input())
# print(n.real)
# print(n.imag)

# def prime(n):
#     for i in range(2,n):
#         if n%i==0:
#             return False
#     else:
#         return True
# n=int(input())
# for i in range(2,n):
#     if(prime(i)==1 and n%i==0):
#         # if(n!=2 or n!=3 or n!=5):
#         for i in not (2,3,5):
#             print("Not Ugly Number")
#             break
# else:
#     print("Ugly Number")
# n=5
# l=list(map(int,input().split()))[:n]
# d=0
# for i in range(1,n):
#     d=int(l[i-1]^int(l[i]))
# print(d)

# from collections import OrderedDict

# x = ('key1', 'key1', 'key3')
# print("".join(OrderedDict.fromkeys(x,1)))
# thisdict={1,2,3}

# print(thisdict)

import math as m
def prime(n):
    for i in range(2,m.ceil(n**.5)+1):
        if n%i==0:
            return False
    else:
        return True
n=int(input())
for i in range(3,int(n//2)):
    if n%i==0:
        if prime(i)==1 and prime(n//i)==1:
            print(i,n//i)
            break
else:
    print(-1)