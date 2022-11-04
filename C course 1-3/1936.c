#include <stdio.h>
int main() {
    int i, T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &i);
        printf("%o\n", i);
    }
}