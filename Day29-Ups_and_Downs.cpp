#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr;
	    for(int i = 0; i < n; i++){
	        int e;
	        cin >> e;
	        arr.push_back(e);
	    }
	    
	    sort(arr.begin(), arr.end());
	    
	    for(int i = 0; i < n; i++){
	        if(i % 2 == 1 && i + 1 < n){
	            swap(arr[i], arr[i+1]);
	        }
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
}