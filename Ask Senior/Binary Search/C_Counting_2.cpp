#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> heights(n);
    
    for (int& h : heights) cin >> h;

    // Step 1: Sort the heights
    sort(heights.begin(), heights.end());

    // Step 2: Process queries
    while (q--) {
        int x;
        cin >> x;

        // Step 3: Use lower_bound to find the first student with height >= x
        int idx = lower_bound(heights.begin(), heights.end(), x) - heights.begin();

        // Step 4: All students from idx to n-1 have height >= x
        cout << (n - idx) << '\n';
    }

    return 0;
}
