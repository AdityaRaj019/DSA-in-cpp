#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void transpose(vector<vector<int>>&arr){
    int row = arr.size();
    int col = arr[0].size();

    for(int i = 0;i<row;i++){
        for(int j=i+1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
//     reverse(arr.begin(),arr.end());
}

void rotate(vector<vector<int>>& matrix){
    transpose(matrix);
    for(int i =0;i<matrix.size();i++){
    reverse(matrix[i].begin(),matrix[i].end());
    }

}
int main() {
    //   vector<vector<int>> arr = {{1, 2, 3{ 4}, {5, 6, 7, 8}, {9, 10, 11, 12},{13,14,15,16}};
        //  vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
         vector<vector<int>> arr={{1}};
      int row = arr.size();
      int col = arr[0].size();
      for(int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
      cout<<endl;

      rotate(arr);
      int rows = arr.size();
      int cols = arr[0].size();
      for(int i = 0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
      cout<<endl;
    //   transpose(arr);
    //   for(int i = 0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    //   }
    //   cout<<endl;

    // cout << "" << endl;
    return 0;
}