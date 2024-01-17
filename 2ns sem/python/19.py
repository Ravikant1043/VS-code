# name="raVikant sharma"
# name=name[::-1]
# print(name.casefold())
# v='aeiou'
# c={}.fromkeys(v,0)
# print(name.count('a',0,5))

# c = {}.fromkeys(v,0)
# rev="".join(reversed(name))
# print(rev)
# s='ravi kant'
# s=s.capitalize()
# l=s.split()
# for i in l:
#     i=i.capitalize()
# print(l)

# from itertools import product
# a=[1,2,3]
# b=[3,4]
# for i in product(a,b):
    # print(i)


# import math
# a,b=map(int,input().split())
# print(math.gcd(a,b))
# print(math.factorial(a))
# print(math.factorial(b))

# name='ravikant sharma'
# t=''
# print(t.join(name[1:8]))
# t=set(list(t))
# print(t)


def merge_the_tools(string, k):
    # your code goes here
    t=len(string)
    k=''

    lin=[]
    # for i in range(0,t,3):
        # k=""
    [string[i:i+k] for i in range(0, t, k)]

    # print(k.join(string[i:i+k]))

string, k = input(), int(input())
merge_the_tools(string, k)