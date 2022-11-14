#include <stdio.h>
int main() {
    int T, year, n, i, j, ans;
    scanf("%d", &T);
    while (T--) {
        int week = 0;
        scanf("%d", &year);
        week = (1 + 1 + 2 * 5 + 3 * (5 + 1) / 5 + year + year / 4 - year / 100 + year / 400);
        week %= 7;
        switch (week) {
        case 0: ans = 6; break;
        case 1: ans = 9; break;
        case 2: ans = 6; break;
        case 3: ans = 5; break;
        case 4: ans = 5; break;
        case 5: ans = 5; break;
        case 6: ans = 5; break;
        }
        printf("%d\n", ans);
    }
}