#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void recsort(vector<int> &arr,int n){
   if(n==1||n==0){
    return ;
   }
   for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
   }
   recsort(arr,n-1);
   

}

int main() {
    vector<int>arr = {7,5,8,3,1};
    recsort(arr,arr.size());
    cout << "" << endl;
    for(int i = 0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}