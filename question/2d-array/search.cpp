#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>ans;
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i = 0;i<row;i++){
            for(int j =0;j<col;j++){
                ans.push_back(matrix[i][j]);
            }
        }
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;

        int s = 0;
        int e = ans.size()-1;


        while(s<=e){
            int mid = s+(e-s)/2;
            // cout<<mid<<endl;
            if(ans[mid]==target){
                cout<<ans[mid]<<endl;
                return true;
            }
            if(ans[mid]<target){
                s = mid+1;
            }else{
                e = mid-1;
            }
            
        }
        return false;
    }

int main() {
    vector<vector<int>> arr = {{1, 3, 5,7}, {10, 11, 16, 20}, {23, 30, 34, 60 }};
    // vector<vector<int>> arr = {{3,4,5,6},{7,8,9,10},{11,12,13,14}};
    cout<<searchMatrix(arr,3);
    // cout << "" << endl;
    return 0;
}