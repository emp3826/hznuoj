#include <stdio.h>
int main() {
    int n, arr[100], i, x, y;
    double z;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    x = arr[0];
    for (i = 0; i < n; i++)
    {
        if (x < arr[i])
            x = arr[i];
    }
    y = arr[0];
    for (i = 0; i < n; i++)
    {
        if (y > arr[i])
            y = arr[i];
    }
    z = 0;
    for (i = 0; i < n; i++)
        z += arr[i];
    z = z * 1.0 / n;
    printf("%d %d %.1f", x, y, z);
}