#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int l = 0, r = n -1;

        int len = n;  // Initialize with full length

        while (l < r) {
            if ((s[l] == '1' && s[r] == '0') || (s[l] == '0' && s[r] == '1')) {
                l++, r--; // Move inward
            } else {
                break; // Stop when a mismatch is found
            }
        }

        len = r - l + 1; // Compute remaining string length
        cout << len << endl;
    }

    return 0;
}