#include <bits/stdc++.h>
using namespace std;
/*
how gcd function works
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);    
}
*/
int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        
        bool flag = false;
        for(int i = 0; i < n; i++) cin >> arr[i];
        for(int i = 0; i < n; i++) {
            for(int j = i +1; j < n; j++) {
                if(__gcd(arr[i], arr[j]) <= 2) { // stl func TC: log2(min(a, b))
                    flag = true;
                    break;
                }
            }
        }
        string ans = (flag) ? "Yes" : "No";
        cout << ans << endl;
    }

    return 0;
}