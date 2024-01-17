# for printing the pattern 
x=int(input("Enter the number\n"))
i=0 
j=0
# while i<=x:
#     j=0
#     while j<i:
#         print("*",end=" ")
#         j+=1
#     i+=1
#     print("\n")
# for i in range(x):
#     for j in range(x):
#         print("*",end=" ")
#     print("\n",end=" ")
# print("the pattern is completed")
for i in range(0,x):
    for j in range(0,i+1):
        print("* ",end="")
    print()
print("the pattern is completed")