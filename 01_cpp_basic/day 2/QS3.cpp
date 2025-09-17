 // sum of all Odd number from 1 to N
 #include<iostream>
using namespace std;

int main(){
    int n=50;
    int oddsum=0;

    for(int i=1; i<=n; i++){
        if(i%2 !=0){
            oddsum=oddsum+i;
        }
    }
    cout<<" the sum of odd is "<<oddsum<<endl;

    
    }
     
