#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n); 
    for(int& it : v) cin >> it;
    set<int> st;
    for(int it : v) st.insert(it);
    cout << st.size();

    return 0;
}