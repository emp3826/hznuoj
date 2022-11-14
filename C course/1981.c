#include<stdio.h>
int com(int x, int y);
int main()
{
    int a, b, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", com(a, b));
    }
    return 0;
}


int com(int x, int y)
{
    int item = 1;
    if (y == 0)
        printf("1\n");
    else
    {
        for (int i = 1; i <= y; i++)
        {
            item = item * x / i;
            x--;
        }
    }
    return item;
}