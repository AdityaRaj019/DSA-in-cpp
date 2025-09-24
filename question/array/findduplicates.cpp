#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


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