#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];   // take current element
        int prev = i - 1;

        // shift elements greater than curr to one position ahead
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;  // place curr at correct position
    }
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 6, 5, 8, 2, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printarray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printarray(arr, n);

    return 0;
}
