#include <iostream>



using namespace std;

class student{
    public:
     int marks;
     student(){}
     int health1 = 100;
     int health2 = 300;
     void display(){
        cout << health1;
     }
     student (int marks){
        this -> marks = marks;
        cout<<this<<endl;
     }
     int print(){
      return marks;
     }
     

};

int main() {
    student s(90);
    student b(67);
    student *c = new student(50);
    cout<<b.print()<<endl;
    cout<<s.print()<<endl;
    cout<<c->marks<<endl;


    // int a =  s.health = 100;
    // cout << a;
   cout<<&s<<endl;
//   <<; cout
    cout << "Hello, World!" << endl;
    return 0;
}