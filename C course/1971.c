#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAXV 1000011
int isPrime[MAXV + 1];
int prime[MAXV + 1];
int size = 0;
void getprime();
int main()
{
    int t;
    scanf("%d", &t);
    getprime();
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (isPrime[n])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

void getprime() {
    for (int i = 2; i < MAXV; i++)
    {
        isPrime[i] = 1;
    }
    for (int i = 2; i < MAXV; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2; i * j < MAXV; j++)
            {
                isPrime[i * j] = 0;
            }
        }
    }
}