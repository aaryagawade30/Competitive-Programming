#include <bits/stdc++.h>
using namespace std;

#define int long long
#define lld long long double
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define vpii vector<pair<int, int>>
#define all(v) (v).begin(), (v).end()
#define fr first
#define sc second
#define inp(v) for(auto& x : v) cin >> x
#define rep(i, a, b) for(int i = a; i < b; i++)

void rain() {
    int a, b, c; cin >> a >> b >> c;
    int sum = a + b + c;
    int dif = b - a;
    a += dif;
    c -= dif;
    if(sum % 3 == 0 && c >= a) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main()
{
    int T; cin >> T;
    while(T--) {
        rain();
    }

    return 0;
}