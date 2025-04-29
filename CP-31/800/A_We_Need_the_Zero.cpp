#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        int x = 0;
        if(n % 2 == 0) {
            int xoro = 0;
            for(int a : arr){
                xoro ^= a;
            }
            if(xoro == 0) x = 3;
            else x = -1;
        }
        else {
            for(int a : arr) {
                x ^= a;
            }
        }
        cout << x << endl;
    }

    return 0;
}