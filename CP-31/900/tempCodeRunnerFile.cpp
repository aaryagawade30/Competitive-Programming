#include <bits/stdc++.h>
using namespace std;

void sortInt() {
	int n; 
	cout << "Enter no. of integers: ";
	cin >> n;
	cout << "Enter integers: ";
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++ ) {
			if(arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
		
	}
	cout << "Sorted integers: ";
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
}

void sortString() {
	int n; 
	cout << "Enter no. of strings: ";
	cin >> n;
	cout << "Enter strings: ";
	vector<string> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	// sort(arr.begin(), arr.end());
	for(int i = 0; i < n -1; i++) {
	    int till = min(arr[i].size(), arr[i +1].size());
		for(int j = 0; j < till; j++) {
		    if(arr[i][j] - '0' > arr[i +1][j] - '0') swap(arr[i], arr[i +1]);
		}
	}
	cout << "Sorted strings: ";
	for(string s : arr) cout << s << " ";
	cout << endl;
}


int main() {
	
	int ch;
	do{
		cout << "Menu: 1. Sort int, 2. Sort string, 3. Exit" << endl;
		cout << "choice: ";
		cin >> ch;
		
		switch(ch) {
			case 1: sortInt();
				break;
			case 2: sortString();
				break;
			case 3: exit(0);
		}
		
	}while(ch != 3);
	
	
	return 0;
}

