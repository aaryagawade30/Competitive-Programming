#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        long long opr = INT_MAX;
        for(int i = 0; i < n -1; i++) {
            if(a[i] <= a[i +1]) {
                long long diff = a[i +1] - a[i];
                long long req_opr = diff / 2 + 1;
                opr = min(opr, req_opr);
            }
            else opr = 0;
        } 
        cout << opr << endl;
    }

    return 0;
}
