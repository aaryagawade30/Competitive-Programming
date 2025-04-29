#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>

bool check(ll x) {
    ll cnt_dig = 0;
    ll zeroes = 0;
    while(x) {
        if(x % 10 == 0) {
            zeroes++;
        }
        cnt_dig++;
        x /= 10;
    }
    return zeroes == cnt_dig -1;
}


int main()
{
    vi round;
    for(ll i = 1; i <= 999999; i++) {
        if(check(i)) round.push_back(i);
    }
    int T; cin >> T;
    while(T--) {
        ll n; cin >> n;
        ll ans = 0;
        for(int i = 0; i < round.size(); i++) {
            if(round[i] <= n) ans++;
            else break;
        }
        cout << ans << endl;
    }

    return 0;
}