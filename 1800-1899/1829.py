F=[0,0,0]
def init():
    F[1]=1
    F[2]=1
    for i in range(3,30):
        F.append(F[i-1]+F[i-2])
init()
while True:
    try:
      n=int(input())
      ans="sjy win"
      if n in F:
          ans="mwy win"
      print(ans)
    except:
        break
