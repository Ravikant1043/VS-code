# import math as m
# n=int(input())
# while(n):
#     n-=1
#     i=0
#     a,b=map(int,input().split())
#     c=min(a,b)
#     i=m.floor(m.sqrt(c))
#     while(i<=a or i<=b):
#         if i**2 % b==a:
#             print(i)
#             break
#         if i>=c**2:
#             break
#         if c**2 % b>a:
#             print("-1")
#             break
#         i+=1
#     else:
#         print(-1)


# def prime(n):
#     for i in range(2,n):
#         if n%i==0:
#             return False
#     else:
#         return True
# n=int(input())
# for i in range(3,n//2):
#     if n%i==0:
#         if prime(i)==1 and prime(n//i)==1:
#             print(i,round(n//i))
#             break
# else:
#     print("-1")


# nearest prime
def prime(n):
    for i in range(2,n):
        if n%i==0:
            return False
    else:
        return True
n=int(input())

while(n):
    a=int(input())
    i=a+1
    while(1):
        if prime(i)==1:
            break
        i+=1
    # print(i,end=" ")
    t=a-1
    while (1):
        if prime(t)==1:
            break
        t-=1
    # print(t)
    # print(min(t,i))
    if (abs(n-t)<abs(i-n)):
        print(t)
    elif (abs(n-t)>abs(i-n)):
        #print("isdbjf")
        print(i)
    else:
        print(t)
    n-=1