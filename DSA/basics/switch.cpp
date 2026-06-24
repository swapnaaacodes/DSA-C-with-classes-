#include<iostream>
using namespace std;
int main(){
    int day = 19;
    switch(day){
        case 1:
            cout << "mon";
            break;
        case 2:
            cout << "tue";
            break;
        case 3:
            cout << "wed";
            break;
        case 4:
            cout << "thurs";  
            break;     
        case 5:
            cout << "fri";
            break;
        case 6:
            cout << "sat";
            break;
        case 7:
            cout << "sun";
            break;
        default:
            cout<<"ivalid";
            break;
        cout << "-> inside switch" << "\n"; //after break nothing is printed, it gets out of the loop
    }
    cout << "check";
    return 0;
}