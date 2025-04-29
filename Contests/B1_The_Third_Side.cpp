#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

void solve() {
    ll n; cin >> n;
    vl arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    ll sum = accumulate(arr.begin(), arr.end(), 0);

    cout << sum - (n -1) << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}