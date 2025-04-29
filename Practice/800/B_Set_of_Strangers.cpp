#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<int> hasColor(n * m, 0);
        vector<int> hasBad(n * m, 0);
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                hasColor[a[i][j] - 1] = 1;
                if (i + 1 < n && a[i][j] == a[i + 1][j]) {
                    hasBad[a[i][j] - 1] = 1;
                }
                if (j + 1 < m && a[i][j] == a[i][j + 1]) {
                    hasBad[a[i][j] - 1] = 1;
                }
            }
        }
        
        int sumHasColor = accumulate(hasColor.begin(), hasColor.end(), 0);
        int sumHasBad = accumulate(hasBad.begin(), hasBad.end(), 0);
        int maxHasBad = *max_element(hasBad.begin(), hasBad.end());
        
        cout << (sumHasColor + sumHasBad - 1 - maxHasBad) << endl;
    }
    return 0;
}
