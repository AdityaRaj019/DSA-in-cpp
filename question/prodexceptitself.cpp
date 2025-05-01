#include <iostream>
#include<vector>


using namespace std;


vector<int>productExcept(vector<int>arr){
    int n = arr.size();
    vector<int>ans(n,1);
    for(int i = 1 ; i < n;i++){
        ans[i] = ans[i-1]*arr[i-1];
    }
    int sufix = 1;
    for(int i = n-2 ; i >=0;i--){
        sufix*=arr[i+1];
        ans[i] = ans[i]*sufix;;
    }

    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         if(i!=j){

    //             ans[i] = ans[i]*arr[j];
    //         }
    //     }
    // }
    return ans;
}


int main() {
    vector<int>prod = {7,1,5,3};
    vector<int>result = productExcept(prod);
    for(int val:result){
        cout<<val << " ";
    }
    // cout << "Hello, World!" << endl;
    return 0;
}