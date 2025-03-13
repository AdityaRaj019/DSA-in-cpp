#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// reverse integer

/*int reverse(int x)
{
    int rev = 0;

    while (x != 0)
    {

        int digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }
    if ((rev < (pow(-2, 31)) / 10) || (rev > ((pow(2, 31) - 1) / 10)))
    {
        return 0;
    }
    return rev;
}

int main()
{
    cout << reverse(1568045367);
}*/

// decimal to binary

/*int main()

{
    int x ;
    cin >> x ;
    float ans = 0;
    int i = 0;    // 1 0 1  1 1
    while (x!=0)
    {
        int bit = x & 1;
        ans = (bit  * pow(10, i)) + ans;
        x = x >> 1;
        i++;
    }
    cout << ans ;


}
*/

// binary to decimal

/*int main(){
    float ans = 0 ; int i = 0 , x ;
    cin >> x ;

    while(x!=0){
        int digit = x % 10 ;
        if(digit == 1){
             ans =  pow(2,i) + ans ;
        }
        x = x / 10 ;
        i++;

    }
    cout << ans;

}*/

// compliment of a no

/*int compi(int n ){
    int m = n ;
    int mask = 0 ;
    while(m!=0){                      
        mask = (mask << 1) | 1 ;
        m = m >> 1 ;

    }
    int ans = (~n)& mask;
    return ans;

}

int main(){
    cout << compi(15);
}*/

// power of two

// 16 = 2 ^ 4 , 8 = 2 ^ 3 ,

/*bool poweroftwo(int n)
{
    float ans;
    for (int i = 0; i <= 30; i++)
    {
        ans = pow(2, i);
        if(ans==n){
            return true ;
        } 
        
    }
    return false;
}
int main(){
    poweroftwo(32);
    return 0 ;
}
*/

// Print unique value of array
// to print only one 1 unique value

int uniquevalue(int arr[] , int n){
    int ans = 0 ;
    for(int i = 0 ; i < n ; i++){
        ans^= arr[i];
    }

    return ans;
}

int main(){
    int arr[100] ; int n ;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout << uniquevalue(arr , n);
    
    

}