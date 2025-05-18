#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tg;
    cin >> n >> tg;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i +1;
    }

    sort(v.begin(), v.end());

    int i = 0, j = n -1;
    while(i < j) {
        int sum = v[i].first + v[j].first;
        if(sum == tg) {
            cout << v[i].second << " " << v[j].second;
            return 0;
        }
        else if(sum > tg) j--;
        else i++;
    }

    cout << "IMPOSSIBLE";

    return 0;
}