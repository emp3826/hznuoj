#include<stdio.h>
int gcd(int x, int y);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d\n", gcd(n, m));
    }
    return 0;
}

int gcd(int x, int y)
{
    while (x != y)
    {
        if (x > y)
            x = x - y;
        if (x < y)
            y = y - x;
    }
    return x;
}