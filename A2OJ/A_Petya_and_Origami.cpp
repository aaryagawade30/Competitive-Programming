#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long  r = 2 * n, g = 5 * n, b = 8 * n;

    cout << ceil((long long)r / k) + ceil((long long)g / k) + ceil((long long)b / k) << endl;
    return 0;
}