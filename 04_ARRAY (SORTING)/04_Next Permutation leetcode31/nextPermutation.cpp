#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& A) {
    // 1. Find the pivot
    int pivot = -1, n = A.size();

    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            pivot = i;
            break;
        }
    }
    if (pivot == -1) {
        reverse(A.begin(), A.end()); // in-place change
        return;
    }

    // 2. Find next larger element
    for (int i = n - 1; i > pivot; i--) {
        if (A[i] > A[pivot]) {
            swap(A[i], A[pivot]);
            break;
        }
    }

    // 3. Reverse (pivot+1 to end)
    int i = pivot + 1, j = n - 1;
    while (i <= j) {
        swap(A[i++], A[j--]);
    }
}

// 🔹 Driver code
int main() {
    vector<int> nums = {1, 2, 3}; // Example input

    cout << "Original array: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    nextPermutation(nums); // call function

    cout << "Next permutation: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
