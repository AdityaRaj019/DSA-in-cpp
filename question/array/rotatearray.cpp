#include <iostream>
#include<vector>


using namespace std;

void rotate(vector<int>& nums, int k) {
    vector<int>temp(nums.size());
    int n = nums.size();
    for(int i = 0;i<n;i++){
        temp[(i+k)%n] = nums[i];
    }
    for(int i = 0 ;i<n;i++){
        cout<<temp[i]<<" ";
    }



}

int main() {
    //   vector<int>nums = {1,2,3,4,5,6,7};
      vector<int>nums = {-1,-100,3,99,5,6,7,9,34,2,56,7,8,9,243,546789,1,31,313,1,3131,11,1,1,13,34,535,3536,6,641,1,44546,567732};
      rotate(nums,7);
    // cout << "Hello, World!" << endl;
    return 0;
}