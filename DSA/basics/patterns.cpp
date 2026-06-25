#include<iostream>
using namespace std;

//pattern 9 
void print8(int n){
    for(int i=1; i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j<=stars;j++){
            cout <<"*";
        }
        cout<<endl;
    }
}

//pattern 8
void print7(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //star
        for(int k=0; k<2*n-(2*i+1); k++){
            cout<<"*";
        }
        //space
        for(int l=0; l<i; l++){
            cout<<" ";
        }
        cout << endl;
    }
}
//pattern 7
void print6(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //star
        for(int k=0; k<2*i+1; k++){
            cout<<"*";
        }
        //space
        for(int l=0; l<n-i-1; l++){
            cout<<" ";
        }
        cout << endl;
    }
}
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

    int n = 5;
    // int t = 1;
    // for(int i =0; i<t; i++){
    //     int n;
    //     print6(5); 
    //     print7(5);
    // }
    print8(5);
    return 0;
}