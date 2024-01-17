a=list(map(int,input().split()))
if len(a)%2==0:
    m=len(a)//2+1
else:
    m=len(a)//2
s=True
for i in range(m-1):
    if a[i]<a[i+1]:
        s=True
    else:
        s=False
        break
for i in range(m+1,len(a)-1):
    if a[i]>a[i+1]:
        s=True
    else:
        s=False
        break
print(s)