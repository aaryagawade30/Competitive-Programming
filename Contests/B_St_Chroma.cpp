#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vl vector<long long>

void rain() {
    ll n, x; cin >> n >> x;
    if(n == x) {
        for(ll i = 0; i < n; i++) cout << i  << " ";
    }
    else {
        for(ll i = 0; i < x; i++) cout << i << " ";
        for(ll i = x + 1; i < n; i++) cout << i << " ";
        cout << x;
    }
    cout << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        rain();
    }

    return 0;
}