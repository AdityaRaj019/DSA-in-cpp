#include <iostream>
#include <vector>
using namespace std;
void bubsortt(int nums[],int n ){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(nums[j]>nums[j+1]){
            int temp = nums[j];
            nums[j] = nums[j+1];
            nums[j+1]=temp;
            }
        }
    } 
}
int main() {
    int arr[30];
    int n ;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubsortt(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}