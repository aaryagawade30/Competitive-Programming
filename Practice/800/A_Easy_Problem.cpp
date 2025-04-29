#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int l = 1, r = n;
        int cnt = 0;
        while(l <= n && r >= 1) {
            int s = l + r;
            if(s == n) {
                cnt++;
                l++, r--;
            }
            else if(s > n) r--;
            else if(s < n) l++;
     
        }
        cout << cnt << endl;
    }

    return 0;
}