#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int arr[10] = {0};
	    int n;
	    cin >> n;
	    
	    int store[n];
	    
	    for(int j = 0; j < n; j++){
	        cin >> store[j];
	    }
	    
	    for(int j = 0; j < n; j++){
	        int index = store[j] - 1;
	        arr[index] = arr[index] + 1;
	    }
	    
	    int max = 0;
	    for(int j = 0; j < 10; j++){
	        if(arr[j] > max){
	            max = arr[j];
	        }
	    }
	    
	    if(max == 1){
	        cout << n - 1 << endl;
	    }
	    else{
	        cout << n - max << endl;
	    }
	}
}