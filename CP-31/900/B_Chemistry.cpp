#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n, k;
    cin >> n >> k;
    string s; 
    cin >> s;
    
    unordered_map<char, int> mpp;
    for (char c : s) {
        mpp[c]++;
    }
    
    int odd_occ = 0;
    for(auto it : mpp) {
        if(it.second % 2 == 1) odd_occ++;
    }

    string ans = (odd_occ > k + 1) ? "NO" : "YES";
    cout << ans << endl; 


}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
