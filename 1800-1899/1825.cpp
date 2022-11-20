#include <iostream>
int main() {
    int n, flag = 0, a[100];
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
        if (a[i] == 1) {
            flag = 1;
            std::cout << "YES";
            break;
        }
    }
    if (flag == 0) std::cout << "NO";
}
