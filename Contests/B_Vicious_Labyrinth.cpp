#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n, k;
    cin >> n >> k;
    
    vi arr(n + 1); // Using 1-based index for convenience
    
    // Construct teleportation cycle: swap adjacent pairs
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1 && i < n) arr[i] = i + 1;
        else arr[i] = i - 1;
    }
    
    vi position(n + 1);
    for (int i = 1; i <= n; i++) {
        position[i] = i;
    }
    
    while (k--) {
        vi new_position(n + 1);
        for (int i = 1; i <= n; i++) {
            new_position[i] = arr[position[i]];
        }
        position = new_position;
    }
    
    // Output final teleportation configuration
    for (int i = 1; i <= n; i++) {
        cout << position[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T; 
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}