# for i in range(0,50,4):
#     print(i,end=" ")

# n="Ravikant"
# n=n.replace("R","Ravikant")
# print(n)

# for i in range(6,51,6):
#     print(i,end=" ")


# n=int(input())
# s=[]
# for i in range(n):
#     s.append(map(int,input().split()))
# print(s[4])

# import math
# for i in range(math.lcm(2,3),51,math.lcm(2,3)):
#     print(i,end=" ")

n=int(input())
a=[]
for i in range(n):
    a.append(int(input()))
d=0
for i in range(2,n,2):
    d+=a[i]
print(d)