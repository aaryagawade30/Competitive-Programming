#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll k; cin >> k;
    ll sum = 0;
    for(ll a = 1; a <= k; a++) {
        for(ll b = 1; b <= k; b++) {
            for(ll c = 1; c <= k; c++) {
                sum += gcd(a, gcd(b, c));
            }
        }
    }
    cout << sum << endl;
    return 0;
}