#include <iostream>
using namespace std;

int main(){

 // implicit type casting 
 char grade= 'a';
 int value=grade;

 cout<<value << endl;

 // explicit type casting 
 double price=100.999;
 int newprice=(int)price;

 cout<< newprice<< endl;

 return 0;

}


