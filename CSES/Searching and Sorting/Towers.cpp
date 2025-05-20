#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<long long> v(n);
    for(long long& x : v) cin >> x;

    int cnt = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] >= v[i -1]) cnt++;
    }
    cout << cnt;
    return 0;
}