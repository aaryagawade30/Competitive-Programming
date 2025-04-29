#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            if (m >= a[i].length()) {  // Ensure there is enough space
                cnt++;
                m -= a[i].length();
            } else {
                break;  // Stop if `m` cannot accommodate more strings
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
