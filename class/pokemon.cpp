#include <iostream>
#include <string>

using namespace std;
class pokemon
{
    private:
        string* name;
        int level;
        int movecp;
        int health;
    public:
     pokemon(){
        health = 100;
        movecp = 30;
        level = 0;
        name = new string("");

     }
     pokemon(int health,int movecp,int level,const string& name){
        this->health = health;
        this->movecp = movecp;
        this->name = new string(name);
        this->level=level;
     }
     pokemon(pokemon &evolve){
        this->health = evolve.health;
        this->movecp = evolve.movecp;
        this->name = new string(*(evolve.name));
        this->level=evolve.level;
     }
     void setname(const string& newname){
        name = new string(newname);
     }
     void sethealth(int health){
        this->health = health;
     }
     void setmove(int movecp){
        this->movecp = movecp;
    }
     void print(){
        cout<<"[Name:"<<*(this->name)<<","<<"Health:"<<this->health<<"," <<"Level:"<<this->level<<","<<"Movecp:"<<this->movecp<<"]"<<endl;
     }
     
     ~pokemon(){
      cout<<"Removing object"<<endl;
      
     }
};


int main()
{
    pokemon pika(1000,60,5,"Pikachu");
    pika.print();
    
    pokemon bulba(pika);
    bulba.print();
    cout<<endl;
    bulba.setname("Bulbasaurus");
    bulba.print();
    
   //  cout << "Hello, World!" << endl;

    return 0;
}