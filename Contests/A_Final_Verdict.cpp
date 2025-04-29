#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

string can_transform_to_x(int n, int x, vector<int>& a) {
    int total_sum = accumulate(a.begin(), a.end(), 0);
    
    // If the total sum is not divisible by n, we can't split evenly
    if (total_sum % n != 0) return "NO";
    
    // The sum must be reducible to x through valid steps
    while (n > 1) {
        bool divisible = false;
        for (int k = 2; k <= n; ++k) {
            if (n % k == 0) { // Valid split size
                int new_size = n / k;
                if (total_sum % k == 0) { // Check if split is valid
                    total_sum /= k;
                    n = new_size;
                    divisible = true;
                    break;
                }
            }
        }
        if (!divisible) return "NO";
    }
    return (total_sum == x) ? "YES" : "NO";
}

void solve() {
    int t;
    cin >> t;
    vector<string> results;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        results.push_back(can_transform_to_x(n, x, a));
    }
    
    for (const string& res : results) {
        cout << res << "\n";
    }
}

int main() {
    solve();
    return 0;
}
