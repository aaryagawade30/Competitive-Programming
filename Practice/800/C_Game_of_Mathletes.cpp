#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int l = 0, r = n -1;
        int score = 0;
        while(l < r) {
            int sum = a[l] + a[r];
            if(sum == k) {
                score++;
                l++, r--;
            }
            else if(sum < k) l++;
            else r--;
        }
        cout << score << endl;
    }
    return 0;
}