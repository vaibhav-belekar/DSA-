#include<iostream>
#include<string>
using namespace std;

  string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());

        }
        return s;
    }

int main(){
    string s="abcabdabcef";
    string part="abc";

     cout<<removeOccurrences(s,part)<<endl;

}    