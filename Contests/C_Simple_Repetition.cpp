#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

bool isPrime(int n) {
    if(n <= 1) return false;
    int cnt = 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}


void solve() {
    ll x, k;
    cin >> x >> k;
    if(k > 1 && x > 1) cout << "NO";
    else if(k == 1) {
        cout << (isPrime(x) ? "YES" : "NO");
    }
    else {
        cout << ((k == 2) ? "YES" : "NO");
    }
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
        cout << endl;
    }

    return 0;
}