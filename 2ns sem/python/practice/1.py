a=int(input())
l=list(map(int,input().split()))[:a]
k=int(input())
c=max(l)
b=[]
for i in l:
    if i+k>=c:
        b.append(True)
    else:
        b.append(False)
print(b)