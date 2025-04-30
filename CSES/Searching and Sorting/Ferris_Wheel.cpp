#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for(int& it : v) cin >> it;
    sort(v.begin(), v.end());

    int low = 0, high = n -1;
    while(low <= high) {
        int mid = (low + high) /2;

    }
    return 0;
}