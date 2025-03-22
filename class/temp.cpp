#include <iostream>
#include <string>  // Include string library

using namespace std;

class pokemon {
private:
    string* name;  // Pointer to dynamically allocated string
    int movecp;
    int health;

public:
    // Default constructor
    pokemon() {
        health = 100;
        movecp = 30;
        name = new string("");  // Allocate memory for empty string
    }

    // Parameterized constructor (fixed)
    pokemon(int health, int movecp, const string& name) {
        this->health = health;
        this->movecp = movecp;
        this->name = new string(name);  // Allocate memory for new string
    }

    // Destructor to avoid memory leaks
    ~pokemon() {
        delete name;
    }

    // Setter functions
    void sethealth(int health) {
        this->health = health;
    }
    void setmove(int movecp) {
        this->movecp = movecp;
    }

    // Print function (fixed `cout` and pointer dereference)
    void print() {
        cout << "[Name: " << *name << ", Health: " << health << ", Movecp: " << movecp << "]" << endl;
    }
};

int main() {
    pokemon pika(1000, 60, "Pikachu");  // Correctly pass string
    pika.print();

    cout << "Hello, World!" << endl;
    return 0;
}
