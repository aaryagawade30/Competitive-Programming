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
    int n, m; cin >> n;
    vi a(n), b(n);
    inp(a);
    inp(b);

    unordered_map<int, int> mp;
    
    for (int num : a) {
        mp[num]++;
    }
    for (int num : b) {
        mp[num]++;
    }

    int maxFreq = 0;
    int highestFreqElement = -1;
    for (auto& pair : mp) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            highestFreqElement = pair.first;
        }
    }
    cout << maxFreq << endl;
    
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    while(T--) {
        rain();
    }

    return 0;
}