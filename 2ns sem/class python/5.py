def prime(n):
    for i in range(2,n):
        if n%i==0:
            return False
    else:
        return True
n=int(input())
if n==1:
    print("Not Mega Prime")
if prime(n)==1:
    while(n):
        if prime(n%10)!=1:
            print("Not Mega Prime")
            break
        n=n//10
    else:
        print("Mega Prime")
else:
    print("Not Mega Prime")