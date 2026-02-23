#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int scoreDifference(vector<int>& nums) {
        if(nums.size()== 0 )return 0;
        int firstPlayer = 0;
        int secondPlayer = 0;
        bool firstPlayerTurn = true;
        // bool secondPlayerTurn  = false;
        // int i = 0;
        int count = 0;
        for(int i  =0;i<nums.size();i++){
            if(nums[i]%2!= 0){
                firstPlayerTurn = !firstPlayerTurn;
            }
            if(i%6==5){
                 firstPlayerTurn = !firstPlayerTurn;
            }
            if(firstPlayerTurn){
                firstPlayer +=nums[i];
            }else{
                secondPlayer+=nums[i];
            }
        }
        return firstPlayer - secondPlayer; 
    }

int main() {
      
    cout << "" << endl;
    return 0;
}