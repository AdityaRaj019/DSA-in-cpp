#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int GCD(int n1,int n2) {
        int n = min(n1,n2);
        int ans = 0;
        for(int i = 1;i<n;i++){
            if((n1%i==0)&&(n2%i==0)){
                ans = max(ans,i);
            }
        }
        return ans;

    }
int main() {
    int n1,n2;
    cin>>n1>>n2;
    cout<<GCD(n1,n2);
    // cout << "" << endl;
    return 0;
}