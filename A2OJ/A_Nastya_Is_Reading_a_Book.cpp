#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l, r;
    if(n == 1) {
        cout << n; 
        return 0;
    }
    vector<pair<int, int>> chp(n);
    for(int i = 0; i < n; i++) {
        cin >> l >> r;
        chp[i] = {l, r};
    }

    int k; cin >> k;

    for(int i = 0; i < n; i++) {
        if(chp[i].first <= k && k <= chp[i].second) {
            cout << n - i;
            break;
        }
    }
    return 0;
}