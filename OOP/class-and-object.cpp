#include<iostream>
using namespace std;

class Hero{  

    //properties of the class Hero
    private:
    int health;

    public:
    void printName(string Level){
    cout << "size of level: " << sizeof(Level) << endl;
    }


    //getter
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }


};

int main(){
    
    //created an object(Rosh) of class Hero
    Hero Rosh;

    //use setter
    Rosh.setHealth(70);
    cout << "size of Health:" << Rosh.getHealth()<< endl;
    //-----x-----//

    string Level = "HENRY";
    Rosh.printName(Level);
    return 0;
}

// the o/p is going to be 4[int data type size is 4 bytes] if the value of int data type is not given.
/* suppose there's no property in the class(empty class) then the size of the object 
will be 1 byte because it is a minimum size of an object */