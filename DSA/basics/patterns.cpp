#include<iostream>
using namespace std;

//pattern 6
void print5(int n){
    for(int i =1; i<=n; i++){
        for(int j=1 ; j<=n-i+1; j++){ 
            cout <<j<<" ";
        }
        cout << endl;
    }
}
//pattern 5
void print4(int n){
    for(int i =1; i<=n; i++){
        for(int j=n; j>=i; j--){ //or you can do in strivers playlist for(int j=0; j<n-i+1; j++)
            cout <<"* ";
        }
        cout << endl;
    }
}
//pattern 3&4
void print3(int n){
        for(int i=1; i<=n ; i++){
            for(int j=1; j<=i; j++){
                cout<<j << "" ; //to print 
            }
           cout << endl;
        }
}
//pattern-2
void print2(int n){
    for(int i=0; i<n ; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout << endl;
    }
}

//pattern-1
void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}


int main(){
    int t = 2;
    for(int i =0; i<t; i++){
        int n;
    }
    print5(3);
    print5(5);
    return 0;
}