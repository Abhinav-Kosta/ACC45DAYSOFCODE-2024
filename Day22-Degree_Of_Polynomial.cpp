#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int pw = -1;
	    int ans = 0;
	    int* arr = new int[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	        pw++;
	        if(arr[i] != 0){
	            ans = pw;
	        }
	    }
	    cout << ans << endl;
	}
}