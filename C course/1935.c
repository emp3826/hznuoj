#include <stdio.h>
int main() {
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        if (n % 3 == 1)
            printf("showshowshow\n");
        else
            printf("forever love\n");
    }
}