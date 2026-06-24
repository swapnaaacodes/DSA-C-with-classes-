#include<iostream>
using namespace std;

class Hero{  

    //properties of the class Hero
    private:
    int health;

    public:
    char level;

    //getter
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }

    //default constructor
    Hero(){
        cout<<"default constructor called"<<endl;
    }

    //Parameterized constructor
    Hero(int health){
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero (Hero& temp){
        cout <<"copy constructor called"<<endl;
        this-> health = temp.health;
        this-> level = temp.level;

    }
    void print(){
        cout << "health: " << this->health << endl;
        cout << "level: " << this->level << endl;
    }

};

int main(){


      
    // Hero S(70,'X');
    // S.print();
    // //copy constructor 
    // Hero R(S);
    // R.print();


    //static allocation
    Hero Pi(5);
    //Pi.setHealth(70);
    //cout << "Address of health:" << &Pi << endl;
    //Pi.getHealth();
    Pi.print();

    //dynamic allocation
    Hero *si = new Hero(100);
    //si->setHealth(100);
    //cout <<"new health:" << si->getHealth()<<endl; //or cout<<"new health:" <<(*si).getHealth() << endl;
    si->print();

    Hero temp(22, 'B');
    temp.print(); 


    return 0;  
}