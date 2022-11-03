#include <ctype.h>
#include <stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    a = tolower(a);
    printf("%c", a);
    return 0;
}