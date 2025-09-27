#include<iostream>
using namespace std;

void slectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx=j;
            }
        }
        swap(arr[i],arr[smallestidx]);
    }
    return;
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr []={5,6,5,8,2,4,9};
    int n=7;

    slectionsort(arr,n);
    printarray(arr,n);
    return 0;
}
