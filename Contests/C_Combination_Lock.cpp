#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    
    if(n % 2 == 0) cout << -1 << endl;
    else {
        vl odds, evens;
        for(ll i = 1; i <= n; i++) {
            if(i % 2 == 1) odds.push_back(i);
            else evens.push_back(i);
        }

        for(ll i = 0; i < odds.size(); i++) cout << odds[i] << " ";
        for(ll i = 0; i < evens.size(); i++) cout << evens[i] << " ";
        cout << endl;
    }

}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}