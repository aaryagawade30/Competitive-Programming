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
    int n, k; cin >> n >> k;
    int low = 1, high = 2 * k;

    while(low <= high) {
        int mid = (low + high) /2;
        int count = mid - (mid / n);
        if(count >= k) high = mid -1;
        else low = mid +1;
    }
    cout << low << endl;
}

int32_t main()
{
    int T; cin >> T;
    while(T--) {
        rain();
    }

    return 0;
}

// the kth el which is not divisible by n is k = x - x/n;