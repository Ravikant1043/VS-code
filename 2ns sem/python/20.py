# # import math as m
# # print(pow(3,4,5))

# n=input()
# v='aeiouAEIOU'
# l=[]
# for i in range(len(n)):
#     if n[i] in v:
#         l.append(n[i])
# l.reverse()
# print(l)
# k=0
# n=list(n)
# for i in n:
#     if i in v:
#         t=''.join(l[k])
#         print(l[k])
#         k+=1
#     else:
#         t=''.join(i)
# print(str(t))

def GCD(x,y):
    r=x%y
    if(r==0):
        return y
    else:
        return GCD(y,r)
a=int(input())
b=int(input())
print(GCD(a,b))