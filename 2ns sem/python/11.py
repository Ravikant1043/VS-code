# a,b=input().split()
# b=int(b)
# x=a[:b]
# x=int(x)
# t=len(a)
# y=a[t-b:]
# y=int(y)
# print(abs(x-y))
# n=int(input())
# for i in range(1,n+1):
#     for j in range(1,n+1):
#         if i==(n+1)//2 or j==(n+1)//2 or i==1 or j==1 or i==n or j==n:
#             print("*",end=' ')
#         else:
#             print(" ",end=' ')
#     print()

t=int(input())
while(t):
    t-=1
    n,a,b,k=map(int,input().split())
    v=0
    f=0
    for i in range(1,n+1):
        if (i%a==0 and i%b!=0) or (i%a!=0 and i%b==0):
            f+=1
            # if(i%a==0 and i%b==0):
            #     f-=1
        # elif(i%a!=0 and i%b==0):
        #     v+=1
    if(f>=k):
        print("Win")
    else:
        print("Lose")