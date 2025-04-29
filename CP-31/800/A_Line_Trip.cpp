#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> points;
        points.push_back(0);
        for(int i = 0; i < n; i++) {
            int pt; cin >> pt;
            points.push_back(pt);
        }
        points.push_back(x);
        n = points.size();

        int max_dist = INT_MIN;
        for(int i = 1; i < n; i++) {
            if(i == n -1) max_dist = max(max_dist, 2 * (points[i] - points[i -1]));
            else max_dist = max(max_dist, points[i] - points[i -1]);
        }
        cout << max_dist << endl;
    }
    return 0;
}