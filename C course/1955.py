import sys
for i in sys.stdin:
    print((int(i)-1)%9+1)