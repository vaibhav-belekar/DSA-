#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& A) {
    int n = A.size();
    if (n == 1) return A[0];

    int st = 0, end = n - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        // Edge cases
        if (mid == 0 && A[0] != A[1]) return A[0];
        if (mid == n - 1 && A[n - 1] != A[n - 2]) return A[n - 1];

        // Safe check for unique element
        if (mid > 0 && mid < n - 1 && A[mid] != A[mid - 1] && A[mid] != A[mid + 1]) 
            return A[mid];

        if (mid % 2 == 0) {
            if (A[mid] == A[mid + 1]) {
                st = mid + 2;  // move right
            } else {
                end = mid - 1; // move left
            }
        } else {
            if (A[mid] == A[mid - 1]) {
                st = mid + 1;  // move right
            } else {
                end = mid - 1; // move left
            }
        }
    }
    return -1; // should never reach
}

int main() {
    vector<int>A = {1,1,2,2,3,3,4,5,5};
    cout << singleNonDuplicate(A) << endl;  // Expected output: 4
    return 0;
}
