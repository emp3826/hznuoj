import datetime
l=[31,28,31,30,31,30,31,31,30,31,30,31]
for i in range(int(input())):
    num=0
    a,b,c=map(int,input().split("-"))
    if((a%4==0)and(a%100!=0)or(a%400==0)):
        l[1]=29
    for i in range(12):
        if(b>i+1):
            num=num+l[i]
        else:
            num=num+c
            break
    print(num,datetime.datetime(a,b,c).strftime("%A"))