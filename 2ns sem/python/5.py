# i='Ravikant sharma'
# print(i)
# print("I am a boy and currently persuing b.tech in Aditya Engineering college")
# print(len(i))
# import math
# a=float(input())
# b=float(input())
# c=float(input())
# s=(a+b+c)/2
# p=round(math.sqrt(s*(s-a)*(s-b)*(s-c)),4)
# print(p)

# import math
# a,b,c=float(input()).split(" ")
# s=(a+b+c)/2
# print(round(math.sqrt(s*(s-a)*(s-b)*(s-c)),2))

# x, y = int(input().split())
# print(int(x)*int(y))
# print(y*x)


# x,y=(input().split())
# x=int()
# print(type(x))
# print(type(y))
# print(x)

# import math
# i = int(input())
# s = i
# while(math.ceil(math.log(i, 10) != 1)):
#     s = 0
#     while(i != 0):
#         s += i % 10
#         i = i//10
#     i = s
# print(s)

# import math
# a,b,c=map(int,input().split())
# s=(a+b+c)/2
# print("{:.2f}".format(math.sqrt(s*(s-a)*(s-b)*(s-c))))

# float = 2.154327
# format_float = "{:.2f}".format(float)
# print(format_float)

x,y=map(int,input().split())
print("{:.4f}".format((x+y)/2))