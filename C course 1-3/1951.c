#include <stdio.h>
int main() {
    int n, T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        if (n == 100)printf("All\n");
        if (n < 100)printf("Walk\n");
        if (n > 100)printf("Bike\n");
    }
}