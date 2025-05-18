#include <iostream>
#include<vector>


using namespace std;
int singleElem(vector<int> arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int ans = -1;
    if(n==1){
        return arr[0];
    }
    while(s<e){
        int mid = s+(e-s)/2;
        if(mid%2==1){
            mid--;
        }
            if(arr[mid]==arr[mid+1]){
                s =mid+2;
            }
            else{
                e = mid;
            }
        
      
        }
        return arr[s];
}

int main() {
      vector<int>arr={1,1,2,3,3,4,4,8,8};
      cout<<singleElem(arr);

    // cout << "Hello, World!" << endl;
    return 0;
}