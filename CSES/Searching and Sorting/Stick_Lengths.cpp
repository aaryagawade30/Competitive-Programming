#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (long long &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    long long median = v[n / 2]; // middle element (lower median if n even)

    long long total_cost = 0;
    for (const auto &length : v)
        total_cost += abs(length - median);

    cout << total_cost << "\n";
    return 0;
}