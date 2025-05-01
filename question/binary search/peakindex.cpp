#include <iostream>
#include<vector>


using namespace std;
int peak(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return mid;

}

int main() {
    vector<int>res = {0,1,2,5,3,2};
    cout<<peak(res);
    cout << "Hello, World!" << endl;
    return 0;
}