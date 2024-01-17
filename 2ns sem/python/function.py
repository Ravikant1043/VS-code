# def add(a,b):
#     return a+b

# n=int(input("Enter the fist value"))
# p=int(input("Ente the second vauue"))
# print(f"the result is {add(n,p)}")


# i=0
# print("",i)
# n=int(input("Enter the number"))
# while n>0:
#     i=(i*10)+(n%10)
#     n=n//10
# print(f"the reversed number is {i}")

def fac(y):
    if y==0:
        return 1
    else:
        return y*fac(y-1)
i=int(input("Enter the number"))
print(f"the factorial is {fac(i)}")