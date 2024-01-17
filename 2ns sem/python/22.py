# import datetime as dt
# t1 = dt.datetime.strptime('12:00:00', '%H:%M:%S')
# t2 = dt.datetime.strptime('02:00:00', '%H:%M:%S')
# time_zero = dt.datetime.strptime('00:00:00', '%H:%M:%S')
# print((t1 - time_zero + t2).time())



n=int(input())
l=list(map(int,input().split()))[:n]
for i in l:
    
    print(len(str(i)),end=' ')