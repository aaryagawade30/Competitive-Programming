#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n; cin >> n;
    vi a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    if(n == 1) {
        cout << a[0] << endl;
        return;
    }
    int diff = 0;
    for(int i = 0; i < n -1; i++) {
        if(b[i +1] < a[i]) diff += (a[i] - b[i +1]); 
    }
    diff += a[n -1];
    cout << diff << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}