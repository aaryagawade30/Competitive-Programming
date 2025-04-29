// filename: max_xor_sum.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> bit_count(30, 0);
        for (int num : a) {
            for (int b = 0; b < 30; ++b) {
                if (num & (1 << b)) {
                    bit_count[b]++;
                }
            }
        }
        // debug
        for(int i = 0; i < 30; i++) cout << bit_count[i] << ' ';
        cout << endl;

        long long max_sum = 0;
        for (int num : a) {
            long long curr_sum = 0;
            for (int b = 0; b < 30; ++b) {
                int bit_val = 1 << b;
                if (num & bit_val) {
                    curr_sum += 1LL * (n - bit_count[b]) * bit_val;
                } else {
                    curr_sum += 1LL * bit_count[b] * bit_val;
                }
            }
            max_sum = max(max_sum, curr_sum);
        }

        cout << max_sum << '\n';
    }

    return 0;
}
