for _ in range(int(input())):
    n=int(input())
    print('29' if n%400==0 or n%4==0 and n%100!=0 else '28')