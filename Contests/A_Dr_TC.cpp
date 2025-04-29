#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vl vector<long long>

void rain() {
    ll n; cin >> n;
    string s; cin >> s;

    ll c1 = count(s.begin(), s.end(), '1');
    ll tot = c1 * n;
    ll c0 = n - c1;
    cout << tot + c0 - c1 << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        rain();
    }

    return 0;
}