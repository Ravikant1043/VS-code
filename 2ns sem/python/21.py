# n=int(input())
# l=list(map(int,input().split()))[:n]
# c=0
# for i in l:
#     c=0
#     for j in l:
#         if(i==j):
#             c+=1
#     if(c==1):
#         print(i)
# b=[]
# for i in l:
#     if i not in b and l.count(i)>1:
#         b.append(i)
# print(b)


# string repetition
n=input()
m=int(input())
i=len(n)
if(m%i==0):
    i=n.count('a')
    print(i*(m//len(n)))
else:
    a=m//i
    i=(n*a)+n[:m-len(n)*a]
    print(i.count('a'))

# find the homeless
n=int(input())
p=[]
h=[]
for i in range(n):
    p.append(int(input()))
for i in range(n):
    h.append(int(input()))

for i in range(n):
    for j in range(n):
        if(p[i]<h[j]):
            del(p[i])
            del(h[j])
            n-=1
            break
print(len(p))