#include <stdio.h>
int max(int x, int y) {
    if (x > y) return x;
    else return y;
}
int main() {
    int a[100][100];
    int i, j, n, t, k;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            for (j = 0; j <= i; j++)
                scanf("%d", &a[i][j]);
        for (i = n - 2; i >= 0; i--)
            for (j = 0; j <= i; j++)
                a[i][j] += max(a[i + 1][j], a[i + 1][j + 1]);
        printf("%d\n", a[0][0]);
    }
}
