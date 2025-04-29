#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for(int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        if(temp == nums || k > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}