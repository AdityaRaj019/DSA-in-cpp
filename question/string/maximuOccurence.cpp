#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

char maxOcc(string s){
    int freq[26]={0};
    int number = -1;
    int max = -1;
    int ans = -1;
    for(int i = 0;i<s.size();i++){
        number = s[i] - 'a';
        freq[number]++;
    }
    for(int i = 0;i<26;i++){
        if(freq[i]>max){
            max = freq[i];
            ans = i;

        }

    }
    return ans + 'a';

}
int main() {
      
    cout << maxOcc("mpapppa")<< endl;
    return 0;
}