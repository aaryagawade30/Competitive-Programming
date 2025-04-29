#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll x) {
    int cnt = 0;
    for (ll i = 1; i <= x; i++) {

        // Check how many number is divisible
        // by n
        if (x % i == 0)
            cnt++;

            if(cnt > 2) return false;
    }
    return true;
}

int main()
{
    ll n; cin >> n;
    ll ans;
    for(int i = n; i < 10e5; i++) {
        if(isPrime(i)) {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}