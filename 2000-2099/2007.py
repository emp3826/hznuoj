for _ in range(int(input())):
    n,k,_=map(int,input().split())
    l=sorted(list(map(int,input().split())))
    a=sum(l[0:k])-n
    print(a if a>0 else 0)
