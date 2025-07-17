#include <iostream>
#include<vector>


using namespace std;
// int pivot(vector<int>arr){
//     int s = 0;
//     int e =arr.size()-1;
//     int mid = s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s+(e-s)/2;
//     }
//     return s;
// }
bool check(vector<int>& nums) {
    // int pivot_elem = pivot(nums);
        // cout<<pivot;
        // int n = nums.size();
        // if(n%2==0)pivot_elem++;
        // if(nums[pivot_elem]<nums[pivot_elem-1]&&nums[pivot_elem]<nums[pivot_elem+1])return true;
        // return false;
    int n = nums.size();
    int c = 0;
    int b=0;
    for(int i = 0;i<n;i++){
        if(nums[i]>nums[(i+1)%n])c++;
    }
    //  for(int i = 0;i<n;i++){
    //     if(nums[i]<nums[(i+1)%n]||nums[i]==nums[(i+1)%n])b++;
    // }
    if(c<=1){
        return true;
    }
    else{
        return false;
    }

}

int main() {
    //   vector<int>res = {2,1,3,4};
    //   vector<int>res = {3,4,5,1,2};
    //   vector<int>res = {1,1,1};
      vector<int>res = {5,4,3,2,1};
      cout<<check(res);


    // cout << "Hello, World!" << endl;
    return 0;
}