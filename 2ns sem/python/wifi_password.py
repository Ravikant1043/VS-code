import subprocess
data= subprocess.check_output(['netsh','wlan','profiles']).decode('utf-8').split('\n')
profiles =[i.split(':')[1][:-1] for i in data if "All User Profiles" in i]
for i in profiles:
    results= subprocess.check_output(['netsh','wlan','profiles',i,'key=clear']).decode('utf-8').split('\n')
    results=[b.split(":")[1][1:-1] for b in results if "Key Content" in b]
    try:
        print("{:<30}| {:<}".fromat(i,results[i]))
    except IndexError:
        print("{:<30}| {:<}".fromat(i, ""))
input("")



# import turtle as t
# for i in range(100):
#    t.speed(10-i)
#    t.forward(50+10*i)
#    t.right(90)

# import subprocess
# data= subprocess.check_output(['netsh','wlan','profiles']).decode('utf-8').split('\n')
# profiles =[i.split(':')[1][:-1] for i in data if "All User Profiles" in i]
# for i in profiles:
#     results= subprocess.check_output(['netsh','wlan','profiles',i,'key=clear']).decode('utf-8').split('\n')
#     results=[b.split(":")[1][1:-1] for b in results if "Key Content" in b]
#     try:
#         print("{:<30}| {:<}".fromat(i,results[i]))
#     except IndexError:
#         print("{:<30}| {:<}".fromat(i, ""))
# input("")