#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i = 0;i < n; i++) cin >> v[i];

    ll moves = 0;
    for(ll i = 0; i < n -1; i++) {
        if(v[i] > v[i +1]) {
            moves += v[i] - v[i +1];
            v[i +1] = v[i];
        }
    }
    cout << moves << endl;

    return 0;
}