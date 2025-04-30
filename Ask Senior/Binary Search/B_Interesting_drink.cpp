#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int& it : v) cin >> it;
    sort(v.begin(), v.end());
    int m; cin >> m;
    while(m--) {
        int x; cin >> x;

        int idx = upper_bound(v.begin(), v.end(), x) - v.begin();
        cout << idx << endl;
    }

    return 0;
}