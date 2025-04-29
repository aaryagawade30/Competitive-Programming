#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll a, b, n;
    cin >> a >> b >> n;
    vl arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    ll max_time = b;
    for(ll num : arr) {
        max_time += min(num, a - 1);
    }
    cout << max_time << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}