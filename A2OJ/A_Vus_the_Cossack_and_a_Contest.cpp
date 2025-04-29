#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    string ans = (m >= n && k >= n) ? "Yes" : "No";
    cout << ans;

    return 0;
}