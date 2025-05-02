#include <iostream>
#include<vector>


using namespace std;
long long int mysqrt(int x){
    int s  = 0;
    int e = x;
    long long int ans = 0;
    int mid = s+(e-s)/2;
    while (s<e)
    {
        long long int sq = mid*mid;
        if(sq==x){
            return mid;
        }
        else if(sq < x){
            ans = mid;
            s = mid+1;

        }
        else{
            e = mid-1;

        }
         mid = s+(e-s)/2;
    }
    return ans;
}
double getPrescision(int pre,int tempSol,int x){
    double factor = 1;
    double ans = tempSol;
    for(int i = 0 ; i < pre ; i++){
        factor = factor/10;
        for(double j = ans;j*j<x;j+=factor){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int tempSol = mysqrt(n);
    cout<<getPrescision(3,tempSol,n);
    // cout << "Hello, World!" << endl;
    return 0;
}