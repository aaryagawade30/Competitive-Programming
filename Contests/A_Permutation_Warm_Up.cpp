#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	
	cin>>t;
	
	while(t-- >0){
	    
	    int  n,sum=0;
	    cin>>n;
	    
	    int a=n+1;
	    
	    for(int i=n;i>0;i--){
	        
	        sum+=(abs((2*i)-a));
	    }
	    
	    int k=sum/2;
	    
	    cout<<(k+1)<<"\n";
	}

}
