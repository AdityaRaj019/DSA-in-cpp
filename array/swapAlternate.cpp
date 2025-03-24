#include <iostream>
#include <algorithm>

using namespace std;
void swapAlternate(int arr[],int n){
    int i =0;
    while(i<n-1){

        int j = i+1;
        swap(arr[i],arr[j]);
        i=j+1;
            
    } 
}



int main() {
    int arr[5] = {5,6,7,8,9};
    int n =5;
    swapAlternate(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    // cout << "Hello, World!" << endl;
    return 0;
}