# import string
# alphabet = set(string.ascii_lowercase)
# input_string = 'The quick brown fox jumps over the lazy dog'
# print(set(input_string.lower()) >= alphabet)
# input_string = 'The quick brown fox jumps over the lazy cat'
# print(set(input_string.lower()) >= alphabet)

a=int(input())
b=list(map(int,input().split()))[:a]
if len(set(b))>=3:
    b=set(b.sort())
    print(b[-1])