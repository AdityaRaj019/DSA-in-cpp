#include<iostream>
#include<vector>


using namespace std ;
 
 int main(){

    vector<int>vec;
    vec.push_back(9); 
    vec.push_back(7);
    vec.push_back(8); 
    for(int i = 0 ; i < vec.size() ; i++){
      cout<< i << " "<< vec[i]<< endl ;
      if(vec[i]<10){

         cout<<"less"<<endl;
      }
      else{
         break;
      }
      cout << "hmm";
    }
    
 }
