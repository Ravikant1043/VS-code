a=input()
b=input()
f=""
s=""
ff=a.lower()
ss=b.lower()
com=""
for i in ff:
    p=i.lower()
    if i in ss and i not in com:
        com+=i
for i in ss:
    if i in ff and i not in com:
        com+=i
ans=""
for i in a:
    p=i.lower()
    if p not in com:
        ans+=i
print(ans)
ans=""
for i in b:
    p=i.lower()
    if p not in com:
        ans+=i
print(ans)
print(com)