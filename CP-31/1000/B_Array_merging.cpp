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
    vi a(n), b(n);
    inp(a);
    inp(b);

    vi longest_subarr_a(2 * n +1, 0);
    vi longest_subarr_b(2 * n +1, 0);

    int cntr = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] == a[i -1]) cntr++;
        else {
            longest_subarr_a[a[i -1]] = max(longest_subarr_a[a[i -1]], cntr);
            cntr = 1;
        }
    }
    longest_subarr_a[a[n -1]] = max(longest_subarr_a[a[n -1]], cntr);
    
    cntr = 1;

    for(int i = 1; i < n; i++) {
        if(b[i] == b[i -1]) cntr++;
        else {
            longest_subarr_b[b[i -1]] = max(longest_subarr_b[b[i -1]], cntr);
            cntr = 1;
        }
    }
    longest_subarr_b[b[n -1]] = max(longest_subarr_b[b[n -1]], cntr);

    int max_freq = -1;
    for(int i = 1; i < 2 * n +1; i++) {
        max_freq =  max(max_freq, longest_subarr_a[i] + longest_subarr_b[i]);
    }

    cout << max_freq << endl;
    
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