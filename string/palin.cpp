#include <iostream>
#include<vector>


using namespace std;

// to convert to lowercase
int main() {
    string c = "AZ";//97 122 a-z 65-90 A-Z
    for(char& C:c){
        if(C>='A'&&C<='Z'){
            C = C+32;
        
        }
        
    }
      cout << c<< endl; 
    // cout << "Hello, World!" << endl;
    return 0;
}