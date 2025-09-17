// code for convert binary number convert to decimal number 
#include<iostream>
using namespace std;

int DecToBinary(int DecNum){
    int ans=0;
    int pow=1;

    while(DecNum>0){
        int rem=DecNum%2;
        DecNum/=2;  

        ans+=(rem*pow);
        pow*=10;
    }
    return ans; // binary form
}

int binTodec(int binNo){
    int ans=0;
    int pow=1;

    while(binNo>0){
        int rem=binNo%10;
        ans=ans+(rem*pow);

        binNo/=10;
        pow*=2;
    }
    return ans;
}

int main(){
    int DecNum=50;
    cout<<"decimal to binary="<<DecToBinary(DecNum)<<endl;

    int binNo=1000111;
    cout<<"binary to decimal ="<<binTodec(binNo)<<endl;
    return 0;

}