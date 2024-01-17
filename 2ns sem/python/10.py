# # print("jrsk")
# from curses.ascii import isdigit


# lide=[ "ravi","kant",89,5,33,"kela","apple"]
# list1=[item for item in lide if not str(item).isdigit()]
# print(list1)
# a,b=map(int,input().split())
# m=0
# if a>b:
#     m=b
# else:
#     m=a
# for i in range(1,m+1):
#     if(a%i==0) and (b%i==0):
#         hcf=i
#         # break
# print(i)

# def prime(n):
#     for i in range(2,n):
#         if(n%i==0):
#             return False
#     else:
#         return True

# n=int(input())
# for i in range(3,n+1):
#     if prime(i) and prime(n//i):
#         if(n%i==0):
#             break
# if(i==1 or n//i==1):
#     print(-1)
# else:
#     print(i,end=" ")
#     print(n//i)

# a,b=map(int(),input().split())
import math as m
n=int(input())
a=n**2
d=m.ceil(m.log10(n))
a=str(a)
s=len(a)
a=a[d:]
print(a)
# if()
print(s)
print(d)
