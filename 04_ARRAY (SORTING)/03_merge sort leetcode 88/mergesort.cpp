#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& A, int m, vector<int>& B, int n) {
    int idx = m + n - 1; // last index of merged array
    int i = m - 1;       // last index of valid A
    int j = n - 1;       // last index of B
    
    while(i >= 0 && j >= 0){
        if(A[i] >= B[j]){
            A[idx--] = A[i--];
        } else {
            A[idx--] = B[j--];
        }
    }
    while(j >= 0){  // if B still has elements
        A[idx--] = B[j--];
    }
}

int main(){
    vector<int> A = {1,2,3,0,0,0}; // must have space for merged result
    int m = 3;

    vector<int> B = {2,5,6};
    int n = 3;

    merge(A, m, B, n);

    cout << "Merged Array: ";
    for(int x : A){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
