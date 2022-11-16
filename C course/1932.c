#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int len;
    scanf("%s", &s);
    len = strlen(s);
    (len > 10) ? printf("BAD") : printf("GOOD");
}