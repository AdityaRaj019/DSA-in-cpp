#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int fact(int a){
        if(a==0) return 1;
        if(a==1) return 1;
        return a*fact(a-1);
    }


 bool isDigitorialPermutation(int n) {
        int sum= 0;
        int num = n;
        int nums = n;
        while(num>0){
            int digit = num%10;
            int facto = fact(digit);
            sum+=facto;
            num/=10;
        }
        int freq1[10] ={0}; 
        int temp = n;
        while(temp >0){
            freq1[temp%10]++;
            temp/=10;
        }
        int freq2[10] = {0};
        temp = sum;
        while(temp>0){
            freq2[temp%10]++;
            temp/=10;
        }

        for(int i = 0;i<10;i++){
            if(freq1[i]!=freq2[i])return false;
        }
        return true;
        
    }

int main() {
      
    cout << "" << endl;
    return 0;
}