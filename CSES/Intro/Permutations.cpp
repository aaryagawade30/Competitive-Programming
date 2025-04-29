#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1\n";
        return 0;
    }
    if (n <= 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    // Print all even numbers first
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    // Then print all odd numbers
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    
    cout << "\n";
    return 0;
}
