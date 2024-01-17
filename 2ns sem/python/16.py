# # from audioop import reverse


# # a = (1, 3, 54, 3, 8967)
# # print(sorted(a, reverse=True))


# # a = ('s', 'soid', 'sdkf')
# # # print(sorted(a,reverse=True))

# # # import

# # second_highest = sorted(set([score for name, score in score_list]))[1]
# # print('\n'.join(sorted([name for name, score in score_list if score == second_highest])))
# # n=int(input())
# # n=5
# # for i in range(1,n+1):
# #     print("  "*(n-i),end="")
# #     print("* "*(2*i-1))
# # for i in range(n-1,0,-1):
# #     print("  "*(n-i),end="")
# #     print("* "*(2*i-1))

# # import datetime
# # print(datetime.datetime.now())

# # if __name__ == '__main__':
# # n = int(input())
# # student_marks = {}
# # for _ in range(n):
# #     name, *line = input().split()
# #     scores = list(map(float, line))
# #     student_marks[name] = scores
# # query_name = input()
# # tm = sum(student_marks[query_name])
# # tt = tm/3 
# # print("{:.2f}".format(tt))


# # t = int(input()) 
# # c=input("Enter  the character")
# # t=5
# # c='R'
# # for i in range(t):
# #     print((c*i).rjust(t-1)+c+(c*i).ljust(t-1))

# # for i in range(t+1):
# #     print((c*t).center(t*2)+(c*t).center(t*6))

# # for i in range((t+1)//2): 
# #     print((c*5*5).center(t*6))    

# # for i in range(t+1):
# #     print((c*t).center(t*2)+(c*t).center(t*6))    

# # for i in range(t):
# #     print(((c*(t-i-1)).rjust(t)+c+(c*(t-i-1)).ljust(t)).rjust(t*6))


# # lst = list(map(int, input("Type number with space: ").split()))

# # print list
# # print('list: ', lst[1])
# def prime(n):
#     if n==1:
#         return False
#     for i in range(2,n):
#         if n%i==0:
#             return False
#     else:
#         return True
# a=int(input())
# b=int(input())
# if a>b:
#     a,b=b,a;
# c=0
# for i in range(a,b+1):
#     if prime(i)==True:
#         c+=1
# print(c)

l=[]
# for i in range(5):
#     c=int(input())
#     l.insert(c)
l=list(map(int,input().split()))[:5]
# print(l)
print(l[9])

