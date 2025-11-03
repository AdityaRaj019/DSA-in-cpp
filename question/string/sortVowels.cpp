#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
bool isvow(char x) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
            x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
            return true;
        }
        return false;
    }

string sortVowels(string s){
    int n = s.size();
    string res="";
    for(int i = 0;i<n;i++){
        if(isvow(s[i])){
            res.push_back(s[i]);
        }
    }
    sort(res.begin(),res.end());
    int j =0;
    for(int i = 0;i<n;i++){
        if(isvow(s[i])){
            s[i] = res[j++];
        }
    }
    return s;

}

int main() {
      string s = "LeEtCodE";
      cout << sortVowels(s) << endl;
    cout << "" << endl;
    return 0;
}