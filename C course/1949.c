#include <stdio.h>
int main() {
    int n, m, sum;
    while (scanf("%d", &n) != EOF) {
        sum = 0;
        while (n--) {
            scanf("%d", &m);
            if (m % 2 == 1)
                sum += m;
        }
        printf("%d\n", sum);
    }
}