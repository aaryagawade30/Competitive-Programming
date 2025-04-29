#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--) {
        vector<int> ip(4);
        for(int i = 0; i < 4; i++) cin >> ip[i];
        set<int> st;
        st.insert(ip[0] + ip[1]);
        st.insert(ip[2] - ip[1]);
        st.insert(ip[3] - ip[2]);
        cout << 4 - st.size() << endl;
    }
 
    return 0;
}