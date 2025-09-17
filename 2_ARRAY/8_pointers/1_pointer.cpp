#include<iostream> 
using namespace std ;

int main(){
    int a=10;
    int* ptr=&a;

    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<&ptr<<endl;;

    // pointer to pointer basically pointer store addrress of pointer ==>

    int**ptr2=&ptr;
    cout<<ptr2<<endl;
    cout<<&ptr2<<endl;


    // dereferance operator
    cout<<*(&a)<<endl;  
    cout<<*(ptr2)<<endl;
    cout<<**(ptr2)<<endl;

    // null pointer
    int**ptr3=NULL;
    cout<<ptr3<<endl;

    return 0;
}