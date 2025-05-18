#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    vector<long long> v(n);
    for(long long& x : v) cin >> x;

    long long current_sum = v[0];
    long long max_sum = v[0];

    for(int i = 1; i < n; i++) {
        current_sum = max(v[i], current_sum + v[i]);
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << endl;
    return 0;
}
