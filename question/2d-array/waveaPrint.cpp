#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int i = 0; i < mCols; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < nRows; j++)
            {
                ans.push_back(arr[j][i]);
            }
        }
        else{
            for(int j=nRows-1;j>=0;j--){
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int nRows = 3;
    int mCols = 4;
    vector<int> result = wavePrint(arr, nRows, mCols);

    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}