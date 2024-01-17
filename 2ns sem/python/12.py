# # nearest prime
# def prime(n):
#     for i in range(2,n):
#         if n%i==0:
#             return False
#     else:
#         return True
# n=int(input())
# while(n):
#     n-=1
#     a=int(input())
#     u=a+1
#     l=a-1
#     if(a>2):
#         while(1):
#             if prime(u)==True:
#                 break
#             u+=1
#         while(1):
#             if prime(l)==True:
#                 break
#             l-=1
#         if(abs(u-a)==abs(l-a)):
#             print(l)
#         elif (abs(u-a)>abs(a-l)):
#             print(l)
#         else:
#             print(u)
#     else:
#         print(2)

# l=[]
# n=int(input())
# for i in range(n):
#     t=int(input())
#     l.append(t)
# print(type(l[0]))
# print(l[0])

# a=int(input())
# b=int(input())
# s=1
# if a>b:
#     s=-1
# for i in range(a,b+s,s):
#     for j in range(2,int(i**.5)+1):
#         if i%j==0:
#             break
#     else:
#         print(i,end=" ")

def prime(n):
    for i in range(2,n):
        if n%i==0:
            return False
    else:
        return True

n=int(input())
for i in range(n,2*n,1):
    if prime(i)==True:
        print(i)
        break


