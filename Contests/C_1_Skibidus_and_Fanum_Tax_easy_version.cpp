#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int b1; cin >> b1;
        bool flag = false;
        a[0] = min(a[0], b1 - a[0]);

        for(int i = 1; i < n; i++) {
            if(a[i] < a[i -1]) {
                a[i] = b1 - a[i];
                if(a[i] < a[i -1]) {
                    flag = true;
                    break;
                }
            }
            else if(b1 - a[i] >= a[i -1]) {
                a[i] = min(a[i], b1 - a[i]);
            }
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}