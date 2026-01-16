#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

//Brute force
// int inversion(vector<int>&arr){
//     int n = arr.size();
//     int cnt= 0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 cnt++;
//             }
//         }
//     }
//     return cnt;
// }
//Optimal merge sort approach







int main() {
      vector<int>arr = {2,4,1,3,5};
    cout << inversion(arr) << endl;
    cout << "" << endl;
    return 0;
}