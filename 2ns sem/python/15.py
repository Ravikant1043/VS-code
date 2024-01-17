# import keyword 
# print(keyword.kwlist)

# all are keywords used in python
# ['False', 'None', 'True', '__peg_parser__', 'and', 'as', 'assert', 'async', 'await', 'break', 'class', 'continue', 'def', 'del', 'elif', 'else', 'except', 'finally', 'for', 'from', 'global', 'if', 'import', 'in', 'is', 'lambda', 'nonlocal', 'not', 'or', 'pass', 'raise', 'return', 'try', 'while', 'with', 'yield']

# print(True +True)
# from operator import eq

# 
# t="Ravi"
# t=hash(t)
# q=9
# print(q)
# print("ravikant sharma")
# print("t")
# print("💘💘💘💓💓")
# print(hash(t))
# q=eq(t)
# print(q)


def lcm(a,b):
    i=max(a,b)
    while(1):
        if i%a==0 and i%b==0:
            return i
        i+=1
n=int(input())
# l=[]
# for i in range(n):
l = list(map(int, input().split()))

# l=list(map(int,t))
m=lcm(l[0],l[1])
for i in  range(2,n):
    m=lcm(m,l[i])
print(m)