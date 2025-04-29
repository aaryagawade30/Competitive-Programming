#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        int tot2 = 0, cur2 = 0;

        for(int i = 0; i < n; i++) {
            if(arr[i] == 2) tot2++;
        }

        int ans = -1;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 2) cur2++;
            if(cur2 == tot2 - cur2) {
                ans = i +1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}