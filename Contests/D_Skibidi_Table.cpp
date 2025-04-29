#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

pair<int, int> findxy(ll d, ll x, ll y, ll size, ll val) {
    if(size == 1) return {x, y};

    ll subSize = size / 2;
    ll blockSize = subSize * subSize;

    for(ll i = 0; i < 4; i++) {
        ll newval = val + i * blockSize;

        if(d < newval + blockSize) {
            switch(i) {
                case 0 : return findxy(d, x, y, subSize, newval);
                case 1 : return findxy(d, x + subSize, y + subSize, subSize, newval);
                case 2 : return findxy(d, x + subSize, y, subSize, newval);
                case 3 : return findxy(d, x, y + subSize, subSize, newval);
            }
        }
    }
    return {-1, -1};
}

ll findD(ll r, ll c, ll x, ll y, ll size, ll val) {
    if(size == 1) return val;

    ll subSize = size / 2;
    ll blockSize = subSize * subSize;

    vector<ll> dx = {0, subSize, subSize, 0};
    vector<ll> dy = {0, subSize, 0, subSize};

    for(ll i = 0; i < 4; i++) {
        ll nx = x + dx[i], ny = y + dy[i];

        if(r >= nx && r < nx + subSize && c >= ny && c < ny + subSize) {
            return findD(r, c, nx, ny, subSize, val + i * blockSize);
        }
    }
    return -1;
}

void solve() {
    ll n, q; cin >> n >> q;
    ll gridsize = 1 << n;
    while(q--) {
        string type; cin >> type;

        if(type == "->") {
            ll r, c; cin >> r >> c;
            cout << findD(r, c, 1, 1, gridsize, 1) << endl;
        }
        else {
            ll d; cin >> d;
            auto [x, y] = findxy(d, 1, 1, gridsize, 1);
            cout << x << " " << y << endl;
        }
    }
}

int main() {
    int T; cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}
