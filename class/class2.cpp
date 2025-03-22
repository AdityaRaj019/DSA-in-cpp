#include <iostream>
#include <cstring> 


using namespace std;

class hero {
  private:
   int age;
   int health;
   int level;
   char *name;
   public:
   hero(){
    char *name = new char[100];
    level = 0;
    health = 0;
    strcpy(name,"Default");
    
   }
   hero(int health,int level,const char* name){
     this->level = level;
     this->health = health;
     this->name = new char[strlen(name)+1];
     strcpy(this->name,name);
   }
   hero(hero &temp){
    this->health = temp.health;
    this->level = temp.level;
   }
   int gethealth(){
      return health;
   }
   int getlevel(){
    return level;
   } 
   void sethealth(int h){
   health = h;
   }
   void setlevel(int l){
    level = l;
   }
   void print(){
    cout<< "[ Name:" << this->name << " ,";
    cout << "health:" << this->health <<",";
    cout <<"level:"<<this->level << "]";
   }
};


int main() {
    
    hero h1(100,7,"Cmon");
    hero h2;
    h2.print();
    h1.sethealth(70);
    hero h3(h2);
    h1.print();
    h3.print();
    // cout << "Hello, World!" << endl;
    return 0;
}