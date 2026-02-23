#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
string maximumXor(string s, string t) {

        int cnt1 = 0;
        int cnt0 = 0;
        for(char c:t){
            if(c=='1')cnt1++;
            else cnt0++;
        }
        string res="";
        for(char x:s){
            if(x=='1'){
                if(cnt0>0){
                    res.push_back('1');
                    cnt0--;
                }else{
                    res.push_back('0');
                }
            }else{
                if(cnt1>0){
                    res.push_back('1');
                    cnt1--;
                }else{
                    res.push_back('0');
                }
            }
        }
        return res;
    }

int main() {
      
    cout << "" << endl;
    return 0;
}