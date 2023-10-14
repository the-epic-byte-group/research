// link to run the code: https://ideone.com/UeiXzn

#include <iostream>
using namespace  std;

enum VertebrateType {
    AMPHIBIAN = 0,
    REPTILE,
    MAMMAL,
    BIRD
};

static const char* enum_to_string[] = {
    "amphibian",
    "reptile",
    "mammal",
    "bird"
};

class Animal {
public:

    Animal(string& name) : name(name) {

    }

   void move(){
       cout << "The " << name << " is moving." << endl;
   }

   void eat(){
        cout << "The " << name << " is eating." << endl;
   }

   void sleep(){
       cout << "The " << name << " is sleeping." << endl;
   }

   void displayCharacteristics(){
        cout << "----------------" << endl;
        cout << "Characteristics:" << endl;
        cout << "----------------" << endl;
        cout << "The " << name << " is a " << enum_to_string[typeOfVertebrate] << endl;
    }

protected:
    string name;
    VertebrateType typeOfVertebrate;

};

//Public Inheritance
class Bird: public Animal {
public:
    Bird(string name) : Animal(name){
        typeOfVertebrate = BIRD;
    }

    void fly(){
        cout << "The " << name << " is Flying!" << endl;
    }
};

//Public Inheritance
class Chameleon: public Animal {
public:
    Chameleon(string name) : Animal(name){
        typeOfVertebrate = REPTILE;
    }

    void changeColor(){
        cout << "The " << name << " changed color!" << endl;
    }

};

//Protected Inheritance
class Cat: protected Animal {
public:
    Cat(string name) : Animal(name){
        typeOfVertebrate = MAMMAL;
    }

    void lickPaw(){
        cout << "The " << name << " is now licking its paw!" << endl;
    }

};

int main() {

    cout << "----------------------------------------THE EPIC BYTE----------------------------------------------------------" << endl;
    cout << "----------------------------------MOVING AT A SPEED OF BYTE----------------------------------------------------" << endl;

    //Bird class (illustrates the Public Inheritance)
    cout << endl;
    cout << "-----------" << endl;
    cout << "BIRD CLASS" << endl;
    cout << "-----------" << endl;

    Bird bird("MockingBird");
    bird.eat();
    bird.fly();
    bird.sleep();
    bird.displayCharacteristics();

    //Chamaleon class (illustrates the Public Inheritance - with all functions called)
    cout << endl;
    cout << "---------------" << endl;
    cout << "Chamaleon CLASS" << endl;
    cout << "---------------" << endl;

    Chameleon chameleon("Tiger chameleon");
    chameleon.eat();
    chameleon.move();
    chameleon.changeColor();
    chameleon.sleep();
    chameleon.displayCharacteristics();

    //Cat class (illustrates the Protected Inheritance)
    cout << endl;
    cout << "-----------" << endl;
    cout << "Cat CLASS" << endl;
    cout << "-----------" << endl;

    Cat cat("stray cat");
    //cat.eat(); // Not accessible because of protected inheritance
    //cat.move(); // Not accessible because of protected inheritance
    //cat.sleep(); // Not accessible because of protected inheritance
    cat.lickPaw();
    //cat.displayCharacteristics(); // Not accessible because of protected inheritance

    return 0;
}
