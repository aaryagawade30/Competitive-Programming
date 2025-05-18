#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<long long> v(n);
    for(long long& x : v) cin >> x;

    sort(v.begin(), v.end());

    long long val = 1;
    for(long long x : v) {
        if(x > val) {
            break;
        }
        else val += x;
    }
    cout << val;
    return 0;
}