#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int pos_cnt = 0, neg_cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == -1) neg_cnt++;
            else pos_cnt++;
        }

        int opr = 0;
        while(pos_cnt < neg_cnt || neg_cnt % 2 == 1) {
            opr++;
            pos_cnt++, neg_cnt--;
            
        }

        cout << opr << endl;
    }

    return 0;
}