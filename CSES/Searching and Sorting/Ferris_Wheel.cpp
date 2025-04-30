#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for(int& it : v) cin >> it;
    sort(v.begin(), v.end());

    int l = 0, r = n -1;
    int cnt = 0;
    while(l <= r) {
        int sum = v[l] + v[r];
        if(sum <= x) {
            cnt++;
            l++, r--;
        }
        else {
            cnt++;
            r--;
        }
    }

    cout << cnt << endl;
    return 0;
}