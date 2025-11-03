#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int maxiWord(string s,string bro){
    unordered_set<char>st(bro.begin(),bro.end());
    // int maxi = INT_MIN;
    int n = s.size();
    int cnt = 0;
    stringstream ss(s);
    string word;
    while(ss>>word){
        bool hasbroken = false;
        for(char c:word){
            if(st.count(c)){
                hasbroken = true;
                break;
            }
        }
        if(!hasbroken){
            cnt++;
        }


    }
   
    return cnt;


}


int main() {
      string ts = "Hello World";
      string bro = "ad";
    cout << maxiWord(ts,bro) << endl;
    cout << "" << endl;
    return 0;
}