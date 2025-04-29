#include <bits/stdc++.h>
#define N 500005
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long t, n, i, j, p[N], s;
    for (i = 1; i < N; i++)
        p[i] = i;
    s = 0;
    for (i = 1; i < N; i++)
    {
        s += i;
        j = sqrtl(s);
        if (s == j * j)
            swap(p[i], p[i + 1]);
    }
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (p[n] == n + 1)
            cout << "-1\n";
        else
        {
            for (i = 1; i <= n; i++)
                cout << p[i] << ' ';
            cout << '\n';
        }
    }
    return 0;
}
