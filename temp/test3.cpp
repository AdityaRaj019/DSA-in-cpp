#include <iostream>
#include <vector>
#include <algorithm> // For std::max
#include <cmath>     // For sqrt, though we'll avoid it

using namespace std;

// // The function should find the rectangle with the largest diagonal.
// // If there's a tie in diagonal length, it should return the one with the largest area.
// int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
//     long long max_diag_sq = 0;
//     int max_area = 0;

//     // Using a range-based for loop for cleaner code
//     for (const auto& dim : dimensions) {
//         long long l = dim[0];
//         long long w = dim[1];
//         // Compare squared diagonals to avoid floating point issues and sqrt()
//         long long current_diag_sq = l * l + w * w;
//         int current_area = l * w;

//         if (current_diag_sq > max_diag_sq) {
//             max_diag_sq = current_diag_sq;
//             max_area = current_area;
//         } else if (current_diag_sq == max_diag_sq) {
//             max_area = max(max_area, current_area);
//         }
//     }
//     return max_area;
// }
// int main() {
//     vector<vector<int>> arr = {{6, 5}, {8, 6}, {2, 10}, {8, 1}, {9, 2}, {3, 5}, {3, 5}};
//     cout << areaOfMaxDiagonal(arr) << endl; // Correct output should be 20
//     return 0;
// }

int bs(vector<int>&nums,int k,int i){
        int s = i;
        int e = nums.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            // cout<<mid<<endl;
            if(nums[mid]==k){
                return nums[mid];
            }
            else if(nums[mid]>k){
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        return -1;
    }
     int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // for(int i = 0;i<nums.size();i++){
        //     cout<<nums[i]<<" ";
        // }
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n-1;i++){
            // cout<<i<<" "<<nums[i]<<endl;
            // cout<<i<<" "<<bs(nums,nums[i],i);
            ans = bs(nums,nums[i],i+1);
            // cout<<i<<" "<<ans<<endl;
            if(ans!=-1){
                break;
            }
        }
        return ans;
    }
    int main(){
        vector<int>arr = {10000,10000,10000,10000,10000,10000,10000,10000};
        cout<<findDuplicate(arr)<<endl;
        return 0;
    }