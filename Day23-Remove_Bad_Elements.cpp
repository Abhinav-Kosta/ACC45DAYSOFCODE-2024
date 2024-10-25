#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    int* arr = new int[n];
	    int maxI = 0;
	    
	    for (int i = 0; i < n; i++) {
            cin >> arr[i];
            maxI = max(maxI, arr[i]);
        }
	    
	    vector<int> trace(maxI + 1, 0);
	    
	    
	    for (int i = 0; i < n; i++) {
            trace[arr[i]]++;
        }
	    
	    int maxFreq = *max_element(trace.begin(), trace.end());
	    
	    cout << n - maxFreq << endl;
	}
}