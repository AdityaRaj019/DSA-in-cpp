#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    
    vector<int> ans;

    int count = 0;
    int total = row * col;

    int startRow = 0;
    int startCol = 0;

    int endRow = row - 1;
    int endCol = col - 1;

    while(count < total){
        for(int i = startCol; count < total && i <= endCol; i++){
            ans.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;
        for(int i = startRow; count < total && i <= endRow; i++){
            ans.push_back(matrix[i][endCol]);
            count++;
        }
        endCol--;
        for(int i = endCol; count < total && i >= startCol; i--){
            ans.push_back(matrix[endRow][i]);
            count++;
        
        }
        endRow--;
        for(int i = endRow; count < total && i >= startRow; i--){
            ans.push_back(matrix[i][startCol]);
            count++;
        }
        startCol++;

    }
        return ans;
}

int main() {
     vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
     vector<int>result = spiralOrder(arr);

    for (int val : result) {
        cout << val << " ";
    }

    // cout << "" << endl;
    return 0;
}