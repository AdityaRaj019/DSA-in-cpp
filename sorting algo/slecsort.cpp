#include <iostream>
#include <vector>
using namespace std;

void slecsort(int arr[] , int n){
    for(int i = 0 ; i < n-1 ; i++){
        int SmallIndx = i;
        for ( int j = i + 1; j < n; j++)
        {
            if (arr[j]<arr[SmallIndx])
            {
                SmallIndx = j;
            }
        }
        
            swap(arr[i],arr[SmallIndx]);
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
    slecsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}