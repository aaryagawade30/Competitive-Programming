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
    int n; cin >> n;
    string s; cin >> s;

    if(s[0] == s.back()) {
        if(s[0] == 'A') {
            cout << "Alice\n";
        }
        else cout << "Bob\n"; 
    }
    else if(s[0] == 'A' && s.back() == 'B') {
        if(count(s.begin(), s.end(), 'B') == 1) {
            cout << "Alice\n";
        }
        else cout << "Bob\n";
    }
    else {
        if(n == 2) {
            cout << "Bob\n";
        }
        else {
            if(s[n -2] == 'A') {
                cout << "Alice\n";
            }
            else cout << "Bob\n";
        }
    }
}

int32_t main()
{
    int T; cin >> T;
    while(T--) {
        rain();
    }

    return 0;
}