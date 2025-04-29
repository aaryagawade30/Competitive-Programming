#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    long long total = 1LL * n * (n + 1) / 2;
    
    if (total % 2 != 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    vector<int> set1, set2;
    long long sum_needed = total / 2;
    
    for (int i = n; i >= 1; i--) {
        if (sum_needed >= i) {
            set1.push_back(i);
            sum_needed -= i;
        } else {
            set2.push_back(i);
        }
        
    }

    cout << set1.size() << "\n";
    for (int num : set1) cout << num << " ";
    cout << "\n" << set2.size() << "\n";
    for (int num : set2) cout << num << " ";
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}
