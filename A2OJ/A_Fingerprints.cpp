#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int fg;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_set<int> st;
    for(int i = 0; i < m; i++) {
        cin >> fg;
        st.insert(fg);   
    }

    for(int i = 0; i < n; i++) {
        if(st.find(nums[i]) != st.end()) {
           cout << nums[i] << " ";
        } 
    }

    return 0;
}