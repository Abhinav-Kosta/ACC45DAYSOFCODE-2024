#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    
	    int size = s.size();
	    
	    vector<int> arr(26, 0);
	    
	    for(char jewel : s){
	        arr[jewel - 'a']++;
	    }
	    
	    int totalCost = 0;
	    
	    for(int count : arr){
	        totalCost += (count + 1) / 2; 
	    }
	    
	    cout << totalCost << endl;
	}
}