#include <iostream>
using namespace std;

int linearSearch( int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
       
    }
    return -1;
}

int main(){
int arr[]={1,4,7,9,5,8,22,6,7};
int size=8;
int target=4;

cout<<linearSearch(arr, size,target)<<endl;
return 0;


   
}

     
