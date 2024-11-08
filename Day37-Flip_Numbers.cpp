#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        int sum_A = 0;
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            sum_A += A[i];
        }

        // Check if |sum_A| is even
        if (abs(sum_A) % 2 != 0) {
            cout << -1 << endl;
        } else {
            cout << abs(sum_A) / 2 << endl;
        }
    }
    
    return 0;
}