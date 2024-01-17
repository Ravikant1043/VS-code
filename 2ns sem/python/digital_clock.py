import time
import datetime
while True:
    print(datetime.datetime.now().hour,end=':')
    print(datetime.datetime.now().minute,end=':')
    print(datetime.datetime.now().second)
    time.sleep(1)