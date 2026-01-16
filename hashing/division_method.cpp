#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


int main() {
      vector<int>arr={789,5677,3,4,55,7};
      vector<int>hash(10);
      for(int i:arr){
        hash[i%10]+=1;
      }
      for(int i:hash){
        cout<<i<<" ";
      }
    // cout << "" << endl;
    return 0;
}