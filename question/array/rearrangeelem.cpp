#include <iostream>
#include<vector>


using namespace std;

vector<int>rearrange(vector<int>arr){
    int n = arr.size();
    vector<int>ans(n);
    vector<int>posi;
    vector<int>nega;
    for(int i:arr){
        if(i<0){
            nega.push_back(i);
        }
        else{
            posi.push_back(i);       
        }
    }
    int k = 0 , j = 0;
    for(int i = 0;i<n;i++){
        if(i%2==0){
            ans[i] = posi[k];
            k++;
        }else{
            ans[i] = nega[j];
            j++;
        }

    }
    return ans;

}
int main() {
    // vector<int>arr={2,-3,5,-1,6,-4};
    vector<int>arr={3,1,-2,-5,2,-4};
    vector<int>result = rearrange(arr);
    for(int val:result){
        cout<<val << " ";
    }
      
     
      
    // cout << "Hello, World!" << endl;
    return 0;
}