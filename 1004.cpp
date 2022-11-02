#include <iostream>
#include <cstring>
int main() {
    int T;
    char s[101];
    std::cin >> T;
    getchar();
    while (T--) {
        gets(s);
        for (int i = strlen(s) - 1; i >= 0; i--)
            std::cout << s[i];
        T ? puts("\n") : puts("");
    }
}