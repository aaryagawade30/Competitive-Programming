#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<long long>

const string target = "01032025";

void solve() {
    ll n; cin >> n;
    vl v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    
    unordered_map<char, int> need;
    for(char ch : target) need[ch]++;

    unordered_map<char, int> have;

    for(int i = 0; i < n; i++) {
        have[v[i] + '0']++;
        bool flag = true;
        for(auto [dig, cnt] : need) {
            if(have[dig] < cnt) {
                flag = false;
                break;
            }
        }

        if(flag) {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}