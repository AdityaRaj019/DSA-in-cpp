#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<int>minOperation ( vector<string> s1 , vector<string>s2 ){
    int n = s1.size();
    int m = s1[0].size();
    int minOp = 0;
    for(int i = 0 ; i < n ; i++){
        int index = s1[i][j] - 'a';
        string temp = s1[i];
        for(int j = 0 ; j < m ; j++){
            while(s1[j] != s2[j]){
                if((value(s2[j]) - (25 - value(s1[j]))) > (value(s2[j]) - value(s2[j]))){
                    s1[j] = order[index];
                    minOp++;
                }else{
                    s1[j] = order[25 - index];
                    minOp++;
                }
            }
        }
        return {minOp};

    }

}
int main() {
      
    cout << "" << endl;
    return 0;
}