
// leetcode238_product_array_except_self_bruteforce.cpp
#include<iostream>
using namespace std ;

int product_array( int arr[], int n){
    int result[100];

    for (int i=0;i<n;i++){
        int product=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                product=product*arr[j];
            }
        }

        result[i]=product;
    }

        //for print result 
    for (int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    cout <<endl;
    }


    


    int main(){
        int arr[]={1,2,3,4};
        int n=4;

        cout<<"here are our result array ="<<product_array(arr,n)<<endl;
        return 0;
    }

