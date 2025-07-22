#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
string removeOccurrences(string s, string part) {
        while(s.find(part)<=s.size()){
            s.erase(s.find(part),part.size());
        }
        return s;
    }

int main() {
      
    cout << "" << endl;
    return 0;
}