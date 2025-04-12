#include <iostream>
#include <vector>

using namespace std;

int maxprofit(vector<int>prices){
    int bestb = prices[0];
    int maxp = 0;
    for(int i =0;i<prices.size();i++){
        if(prices[i]>bestb){
            maxp=max(maxp,prices[i]-bestb);
        }
        bestb=min(prices[i],bestb);
    }
    return maxp;
}

using namespace std;


int main() {
      vector<int>prices = {7,1,5,3,4,2};
      int profit = maxprofit(prices);
      
        cout << profit<< endl;
    return 0;
}