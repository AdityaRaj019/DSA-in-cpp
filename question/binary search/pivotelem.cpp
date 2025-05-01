#include <iostream>
#include<vector>


using namespace std;
int pivot(vector<int>arr){
    int s = 0;
    int e =arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int main() {
      vector<int>res = {3,4,5,1,2};
      cout<<pivot(res);
    // cout << "Hello, World!" << endl;
    return 0;
}