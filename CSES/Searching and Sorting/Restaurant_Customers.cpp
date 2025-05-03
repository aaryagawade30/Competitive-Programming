#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<pair<int, int>> cust(n);
    for(int i = 0; i < n; i++) {
        cin >> cust[i].first >> cust[i].second;
    }
    vector<int> arr(n), dep(n);

    for(int i = 0; i < n; i++) {
        arr[i] = cust[i].first;
        dep[i] = cust[i].second;
    }
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int i = 0, j = 0;

    int cnt = 0, maxi = 0;
    while(i < n && j < n) {
        if(arr[i] < dep[j]) {
            cnt++;
            maxi = max(maxi, cnt);
            i++;
        }
        else {
            j++;
            cnt--;
        }

    }

    cout << cnt;

    return 0;
}