#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        int even = 0, odd = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] % 2 == 0) even += a[i];
            else odd += a[i];
        }
        if(even % 2 == odd % 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}