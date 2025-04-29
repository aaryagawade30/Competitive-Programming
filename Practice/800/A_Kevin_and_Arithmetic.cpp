#include <bits/stdc++.h>
using namespace std;

bool static comp(int a, int b) {
    return a % 2 == 0 && b % 2 == 1;
}

int main()
{
    int t; cin >> t;
    while(t--) {
        int s = 0, cnt = 0;
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end(), comp);
        for(int i = 0; i < n; i++) {
            s += a[i];
            if(s % 2 == 0) {
                cnt++;
                s = 1;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}