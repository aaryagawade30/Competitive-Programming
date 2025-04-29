#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll x, n;
    cin >> x >> n;

    ll fin;
    if(n % 4 == 0) fin = 0;
    else if(n % 4 == 1) fin = -n;
    else if(n % 4 == 2) fin = 1;
    else if(n % 4 == 3) fin = n +1;

    if(x % 2 == 0) fin = x + fin;
    else fin = x - fin;

    cout << fin << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}