# mydict={
#     "pankha":"Fan",
# }
# a=input()
# print(mydict.get(a))

# n=list(map(int,input().split()))
# print(*set(n))

# s={3,"3",3.0}
# print(s)

n=input()
# print(min(n[::-1]))
n=n[::-1]
if(min(n).lower() in n):
    print(min(n).lower())
else:
    print(min(n))
    
    
# 6005231116