#include <algorithm>
#include <iostream>
int p(int n, int w[]);
int qh(int m, int n, int w[]);
int main()
{
    int t, n, m = 0;
    int a[1000];
    std::cin >> t;
    while (t--)
    {
        std::cin >> n;
        for (int i = 0; i < n; i++)
            std::cin >> a[i];
        std::sort(a, a + n);
        m = p(n, a);
        std::cout << p(n, a) << " ";
        std::cout << qh(p(n, a), n, a) << std::endl;
    }
}
int p(int n, int w[])
{
    int m, x, y;
    if (n % 2 == 0) m = w[n / 2];
    else m = w[(n - 1) / 2];
    return m;
}
int qh(int m, int n, int w[])
{
    int i;
    int t1 = 0, t2 = 0;
    if (n % 2 == 0)
    {
        for (i = n / 2; i >= 0; i--)
            t1 += m - w[i];
        for (i = n / 2; i < n; ++i)
            t2 += w[i] - m;
    }
    else
    {
        for (i = (n - 1) / 2; i >= 0; i--)
            t1 += m - w[i];
        for (i = (n - 1) / 2; i < n; ++i)
            t2 += w[i] - m;
    }
    return t1 + t2;
}