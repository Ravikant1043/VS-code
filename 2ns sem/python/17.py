def hcf(a,b):
    if a>b:
        a,b=b,a
    # k=0
    for i in range(2,b):
        if(a%i==0 and b%i==0):
            return i
n=int(input())
l=list(map(int,input().split()))[:n]
t=hcf(l[0],l[1])
t=hcf(t,l[2])
# for i in range(2,n):
#     k=hcf(t,l[i])
#     t=k
print(t)

# n=int(input())
# l=list(map(int,input().split()))
# o=0
# e=0
# for i in range(n):
#     if (l[i]%2!=0):
#         o+=1
#     else:
#         e+=1
# if o==0 or (e%2==0 and o%2==0) or e==0:
#     print("YES")
# else:
#     print("NO")