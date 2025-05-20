#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll n, d; cin >> n >> d;
    vector<ll> v(n);
    for (ll& x : v) cin >> x;

    sort(v.begin(), v.end());

    ll l = -1, r = n -1;
    ll teams = 0, teams_size = 1;

    while(l < r) {
        if(v[r] * teams_size <= d && l < r) {
            l++, teams_size++;
        }
        else {
            teams++, teams_size = 1;
            r--;
        }
    }
    cout << teams;

    return 0;
}
