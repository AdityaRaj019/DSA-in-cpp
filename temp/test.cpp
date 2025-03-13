#include <iostream>
#include<cmath>

using namespace std;

/*int rev(int *a, int *b)
{
    swap(a, b);



}

int main()
{
    int a = 5;
    int b = 6;

    rev(&a,&b) ;

  cout << "after swaping" << endl;
  cout << a << b ;

    return 0;
}*/

//{ 
/*bool plain(int arr[], int n)

  int st = 0;
  int e = n - 1;

  while (e >= st)
  {
    if (arr[st] == arr[e])
    {
      st++;
      e--;
    }
    else
    {
      return false;
    }
  }
  return true ;
}*/

int main(){
  /*int arr[20] , n , i = 0 ;

  
  cout << "Emter size" << endl ;
  cin >> n ;

  for ( i = 0; i < n; i++)
  {
    cin >> arr[i] ;
  }
   cout << plain(arr , n);*/
   int num = 5;
   int *p = &num;
   int q = *p;
   cout << q <<"-"<< p<<endl;
   cout << q <<"-"<< *p;

  
  return 0 ;
}