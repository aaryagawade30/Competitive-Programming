#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n; cin >> n;
    vi arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.rbegin(), arr.rend());
    while(n > 1) {
        int a = arr[n -2], b = arr[n -1];
        arr[n -2] = a + b - 1;
        n--;
    } 
    cout << arr[0] << endl;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}
