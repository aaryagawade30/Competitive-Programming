#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll a, b, c; cin >> a >> b >> c;

    bool flag = false;
    ll na = 2 * b - c;
    if(na % a == 0 && na / a > 0) flag = true;

    ll nb = (a + c) /2;
    if(nb % b == 0 && nb / b > 0 && (c -a) % 2 == 0) flag = true;

    ll nc = 2 * b - a;
    if(nc % c == 0 && nc / c > 0) flag = true;

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

}
    
int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}