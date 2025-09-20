#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedpages){//O(n)
    int student=1, pages=0;

    for (int i=0;i<n;i++){
        if(arr[i]>maxAllowedpages){ // corner case imp 
            return false;
        }
        if(pages+arr[i]<=maxAllowedpages){
            pages +=arr[i];
        }else{
            student++;
            pages=arr[i];
        }

    }
    return student > m ? false:true;
}
int allocateBook(vector<int> &arr,int n,int m){//O(logN*n)
    if(m>n){
        return -1;
    }
    int sum =0;
    for(int i=0;i<n;i++){ // O(n)
        sum+=arr[i];
    }
    int ans=-1;
    int st=0,end=sum;//range of possible ans 

    while(st<=end){//OlogN*n
        int mid=st+(end-st)/2;

        if(isValid(arr,n,m,mid)){//left
            ans=mid;
            end=mid-1;

        }else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr={15,17,20};
    int m=2, n=3;

    cout<< " book allocation "<<allocateBook(arr,n,m)<<endl;
    return 0;
}

// output==>  book allocation 32
