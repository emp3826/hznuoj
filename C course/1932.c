#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int len;
    scanf("%s", &s);
    len = strlen(s);
    if (len > 10) {
        printf("BAD");
    }
    else {
        printf("GOOD");
    }
    return 0;
}