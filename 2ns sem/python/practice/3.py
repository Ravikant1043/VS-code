n=int(input())
b=1
i=1
while(True):
    if b>=(n):
        break
    i=str(i)
    if len(i)==1 and i=='2':
        b=b
        (n)+=1
    elif len(i)>1:
        if i[-1]=='2' or (i[-1]=='4' and i[-2]=='1'):
            b=b
            (n)+=1
    else:
        b+=1
    i=int(i)
    i+=1
print(b)