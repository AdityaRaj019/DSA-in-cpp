#include <iostream>
#include <vector>


using namespace std;


int cointainer(vector<int>height){
    int maxwater = 0;
    int lp = 0;
    int rp = height.size()-1;
    while(lp<rp){
        int wt = rp-lp;
        int ht = min(height[lp],height[rp]);//taking height of smallest line
        int curr = wt*ht;
        maxwater = max(maxwater,curr);
        height[lp]<height[rp]?lp++:rp--; //checking and updating smallest wall couse that is only resposible for storage
    }
    return maxwater;

}

int main() {
    vector<int>height = {7,1,5,3,4,2};
    int maxArea = cointainer(height);
    
    cout << maxArea<< endl;
    cout << "Hello, World!" << endl;
    return 0;
}