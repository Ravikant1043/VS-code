# import pyttsx3

# name="""lag ja gale ki phir ye hashin raat ho na ho
#   Shaayad phir is janam men mulaaqaat ho na ho"""
# engine = pyttsx3.init()
# engine.say("ravikant sharma")
# engine.runAndWait()


# import sympy.ntheory as m
def isprime(a):
  if a<2:return False
  for i in range(2,a**(.5)):
    if a%i==0:retun False
  return True

def hello():
  n=int(input())
  i=2
  ans=1
  t=3
  while(i<=n):
      if(isprime(t)):
          if(i*t<=n):
              ans+=1
              i*=t
          else:
              return ans
  return ans
    
a=int(input())
while(a>0):
    a-=1
    print(hello())

