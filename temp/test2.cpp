#include <iostream>
#include <cmath>

using namespace std;

// void swapi(int* a , int* b){
//   int temp = *a;
//   *a = *b;
//   *b = temp;

// }

int main(){
  // char ch[6] = "abcde";
  // char *c = &ch[0];

  // std::cout<< c;
  //  int* p = new int;

 //  cin >> *p;
 //  cout << p;
 
 //  int a = 8;
 //  int b =7;
 //  swapi(&a,&b);
 
 //  cout<<a<<" "<< b;
  
 int n ;
 cin >> n;
 int* p = new int[n];

 for(int i = 0;i<n;i++){
  cin>>p[i];
 }
 for(int i = 0;i<n;i++){
  cout<<p[i];
 }

 cout << p;
 


  
 
  


  return 0;
}

