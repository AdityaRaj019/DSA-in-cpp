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
};
class male : public human{
    public:
    male(){height=0;}

    string color;
    void rand(){
        cout<<"male is rand0m"<<endl;
    }
};

int main() {
      
    male m1;
    m1.age = 78;
    m1.color = "black";
    // m1.height = 55;
    m1.weight = 45;
    m1.getData();

    cout << "Hello, World!" << endl;
    return 0;
}