#include <bits/stdc++.h>
using namespace std;


void solve() {
    
    int n,k;
	    
    cin>>n>>k;
    
    vector<int> a(n);
   
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    
    int ind1=-1,ind2=-1;
    for(int i=0;i<n;i++){
        if(a[i]<=k){
           ind1=i;
            break; 
        }
        
    }
    
    if(ind1<n-1)
    for(int i=ind1+1;i<n;i++){
        if(a[i]<=k){
        ind2=i;
break;
        }
        
    }
    
    vector<int> sorteda(n);
    vector<int> sortedra(n);
    sort(sortedra.rbegin(), sortedra.rend());
    sort(sorteda.begin(), sorteda.end());
    if(sorteda == a || sortedra == a) {
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] <= k) cnt++;
        }
        cout << ((cnt >= 2) ? "YES" : "NO") << endl;
        return;
    }
    else {
    if(ind1!=-1 && ind2!=-1 && ind2-ind1>=2)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}
}
int main() {
	// your code goes here
	
	int t;
	
	cin>>t;
	
	while(t--){
	    solve();
	}

}
