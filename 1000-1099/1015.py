n = int(input())
while n:
    for _ in range(n):
        l = sorted(list(map(int,input().split())))
        print(' '.join(str(k) for k in l))
    n = int(input())