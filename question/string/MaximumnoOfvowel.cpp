#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool isvow(char x) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
            return true;
        }
        return false;
    }
int maxVowels(string s, int k) {
    int n = s.size();
    int count =0;
    int ans=0;
    for(int i = 0;i<k;i++){
        if(isvow(s[i])) count++;
    }
    for(int i = k;i<n-k;i++){
        if(isvow(s[i])) count++;
        if(isvow(s[i-k])) count--;
        ans=max(ans,count);

    }
    return ans;
}

int main() {
      string s = "abciiidef";
      int k = 3;
      cout << maxVowels(s,k) << endl;
    cout << "" << endl;
    return 0;
}