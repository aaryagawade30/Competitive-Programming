#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int cnt = 0, maxcnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 1) cnt = 0;
            else cnt++;
            maxcnt = max(cnt, maxcnt);
        }
        cout << maxcnt << endl;
    }

    return 0;
}