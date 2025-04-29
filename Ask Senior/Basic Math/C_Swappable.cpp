#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> freq;
    
    // Read input and count frequency of each element
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    long long totalPairs = (1LL * n * (n - 1)) / 2; // Total unordered pairs (nC2)
    long long invalidPairs = 0;

    // Count invalid pairs (pairs where A[i] == A[j])
    for (auto [val, count] : freq) {
        if (count > 1) {
            invalidPairs += (1LL * count * (count - 1)) / 2;
        }
    }

    // Valid pairs = totalPairs - invalidPairs
    cout << (totalPairs - invalidPairs) << endl;

    return 0;
}
