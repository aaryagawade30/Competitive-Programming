#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, m; 
        cin >> n >> m;
        
        vector<pair<long long, vector<long long>>> arr;

        // Read input and store arrays along with their total sum
        for (int i = 0; i < n; i++) {
            vector<long long> temp(m);
            long long total_sum = 0;
            for (int j = 0; j < m; j++) {
                cin >> temp[j];
                total_sum += temp[j];
            }
            arr.push_back({total_sum, temp});
        }

        // Sort arrays in descending order based on total sum
        sort(arr.rbegin(), arr.rend());

        // Compute the maximum score
        long long sum = 0, total_score = 0;
        for (int i = 0; i < n; i++) {
            for (long long val : arr[i].second) {
                sum += val;
                total_score += sum;
            }
        }

        // Output the maximum possible score
        cout << total_score << endl;
    }

    return 0;
}
