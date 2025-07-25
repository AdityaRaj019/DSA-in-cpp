#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
// int count(string s){
//     int freq[26]={0};
//     for(int i = 0;i<s.size();i++){
//         freq[s[i]-'a']++;
//     }
//     return freq;
    
// }
bool checkEqual(int freq1[],int freq2[]){
    for(int i = 0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2) {
    int freq1[26]={0};
    int freq2[26]={0};
    for(int i = 0;i<s1.size();i++){
        freq[s1[i]-'a']++;
        // freq[s2[i]-'a']++;
    }
    // 
    int i = 0;
    int j = s1.size();
    while(i<j&&j<=s2.size()){
         freq[s2[i]-'a']++;
         i++;
    }
    if(checkEqual(freq1,freq2)){
        return true;
    }
    while(i<s2.size()){
        char newChar = s2[i];
        int index = newChar - 'a';
        freq[index]++;
        char oldChar = s2[i-j];
        index = oldChar - 'a';
        freq[index]--;
        if(checkEqual(freq1,freq2)){
            return true;
        }
        i++;    
        
    }
    
    // for(int i = 0;i<s1.size();i++){
        //     j++;
        // }
    return false;
    
}


int main() {
      
    cout << "" << endl;
    return 0;
}