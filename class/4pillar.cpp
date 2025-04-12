#include <iostream>
#include<string>


using namespace std;

class human{
  public: 
     int height;
     int weight;
     int age;
  public:
     human(){}
     human(int height,int weight,int age){
        this->height=height;
        this->weight=weight;
        this->age=age;
     }
     void getData(){
        cout<<"[Height:"<<height<<", Weight:"<<weight<<", age:" << age<<"]" <<endl;
     }
     void operator+(human &h1){
      human h;
      int value1  = this->height;
      int value2 = h1.weight;
      cout<< value1 - value2;
     }
};
class male : public human{
    public:
    male(){height=0;}

    string color;
    male(int height,int weight,int age,const string &color){
      this->height=height;
      this->weight=weight;
      this->age=age;
      this->color = color;

   }
    void rand(){
        cout<<"male is balck"<<endl;
    }
    void getData(){
      cout<<"[Height:"<<height<<", Weight:"<<weight<<", age:" << age<<", Color:"<<color<<"]" <<endl;
    }
};

int main() {
   
   
   // Inheritence

   //  male m1;
   //  m1.age = 78;
   //  m1.color = "black";
   //  // m1.height = 55;
   //  m1.weight = 45;
   //  m1.getData();

   //  cout << "Hello, World!" << endl;

   // Polymorphism

   // human h3,h4;
   // h3.height = 4;
   // h4.weight = 5;

   // h3+h4;

   human h1(6,78,8);
   male m1(4,5,6,"kalla");
   
   h1.getData();
   m1.getData();

 

    return 0;
}