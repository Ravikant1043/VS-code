n= int(input())
t=0
for i in range(1,n):
    if n%i==0:
        t+=i
if n%t==0:
    print("True")
else:
    print("False")