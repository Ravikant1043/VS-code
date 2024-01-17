n=input()
v='AEIOUaeiou'
b=[]
for i in n:
    if i in v:
        b.append(i)
k=len(b)
k-=1
for i in n:
    if i in v:
        print(b[k],end='')
        k-=1
    else:
        print(i,end='')