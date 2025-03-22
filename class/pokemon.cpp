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
        this->name = new string(evolve.name);
        this->level=level;
    
    void sethealth(int health){
        this->health = health;
    }
    void setmove(int movecp){
        this->movecp = movecp;
    }
    void print(){
        cout<<"[Name:"<<*(this->name)<<","<<"Health:"<<this->health<<"," <<"Level:"<<this->level<<","<<"Movecp:"<<this->movecp<<"]";
    }
};


int main()
{
    pokemon pika(1000,60,5,"Pikachu");
    pika.print();
    // cout << "Hello, World!" << endl;

    return 0;
}