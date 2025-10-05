#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;

        for(int i=0;i<n;i++){
            char ch=chars[i];
            int count=0;

            while(i<n && chars[i]==ch){
                count++; i++;   
            }
            if(count==1){
              chars[idx++]=ch;  
            }else{
                chars[idx++]=ch;
                string str =to_string(count);
                for(char dig:str){
                    chars[idx++]=dig;
                }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
        
    }

   int main() {
    vector<char> chars = {'a', 'a', 'a', 'b', 'b', 'c', 'c', 'c', 'c'};

    int len = compress(chars);

    cout << "Compressed length: " << len << endl;
    cout << "Compressed array: ";
    for(char c : chars) cout << c << " ";
    cout << endl;

    return 0;
}


