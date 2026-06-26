// encapsulation means combining data members and member functions into one single unit 
// all data members are private, and it can be only accessed by the same class

/* advantages:
1. Prevents unauthorized access to object data.
2. Allows validation before modifying data.
3. Hides implementation details from users of the class.
4. Improves code maintainability and modularity.
5. Makes classes easier to reuse.*/

/*
Q. Bank Account Class
   Create a class BankAccount with:

    Private members: accountNumber, balance
    Public methods: deposit(), withdraw(), getBalance()
    Ensure withdrawal doesn’t allow negative balance.*/

#include<iostream>
using namespace std;

class BankAccount{ 
    private:
    int accountNumber;
    int balance = 0;
    
    public:
    void deposit(int n){
        int total_bal = balance + n;
        cout<<"the balance after depositing is:"<< total_bal <<endl;
    }
    void withdraw(int p){
        if(p<0 || balance == 0) cout<< "apologies, withdrawal not allowed from negative balance." <<endl;
        else cout <<"balance after withdrawal: "<<balance - p<<endl;
    }
    int getBalance(){
        return balance;
    }
};

int main(){
    BankAccount Rosh;
    // Rosh.deposit(900);
    Rosh.withdraw(-45);
    // cout<<"to check balance:"<<Rosh.getBalance();
    return 0;
}