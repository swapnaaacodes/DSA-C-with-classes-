//these are strivers a2z dsa sheet's 22 pattern tricks before solving coding problems

#include<iostream>
using namespace std;

//pattern 22
void print21(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right = (2*n-2)-j;
            int down =(2*n-2)-i;
            cout<<(n-min(min(top,down), min(left,right)));
        }
        cout<<endl;
    }
}

//pattern 21
void print20(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            if(i==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }

}

//pattern 20
void print19(int n){
    int space = 2*n-2;
    for(int i=1; i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        //stars
        for(int j=1; j<=stars;j++){
            cout <<"*";
        }
        //space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        //stars
        for(int j=1; j<=stars;j++){
            cout <<"*";
        }
        cout<<endl;
        if(i<n) space-=2;
        else space +=2;
        
    }
}

//pattern 19
void print18(int n){
    int inis = 0;
    for(int i=0; i<n; i++){
        //stars
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        //stars
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        inis +=2;
        cout<<endl;
    }
    inis = 2*n-2;
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        //stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        inis -=2;
        cout<<endl;
    }
}

//pattern 18
void print17(int n){
    for(int i=0; i<n; i++){
        for(char ch='E'-i ; ch<='E'; ch++){
            cout<<ch<< " ";
        }
        cout<<endl;
    }
}

//pattern 17
void print16(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i+1;j++){
            cout<<" ";
        }
        //alphabet
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout<<ch<<" ";
            if(j<=breakpoint)ch++;
            else ch--;
        }
        //space
        for(int j=0; j<n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

//pattern 16
void print15(int n){
    for(int i=0; i<n;i++){
        char ch = 'A' + i;
        for(int j=0; j<=i; j++){
            cout<< ch << " " ;
        }
        cout<<endl;
    }
}

//pattern 15
void print14(int n){
    for(int i=0; i<n;i++){
        for(char ch ='A'; ch<'A'+(n-i);ch++){
            cout<< ch<< " ";
        }
        cout<<endl;
    }    
}

//pattern 14
void print13(int n){
    for(int i=0; i<n;i++){
        for(char ch ='A'; ch<='A'+i; ch++){
            cout<< ch<< " ";
        }
        cout<<endl;
    }
}

//pattern 13
void print12(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<< " ";
            num +=1;
        }
        cout<<endl;       
    }
}

//pattern 12
void print11(int n){
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        //numbers
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //space
        for(int k=1; k<=space; k++){
            cout<<" ";
        }
        //numbers
        for(int l=i; l>=1; l--){
            cout<<l;
        }
        cout << endl;
        space -=2;
    }
}

//pattern 11
void print10(int n){
    int start;
    for(int i=0; i<n; i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0; j <=i; j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

//pattern 10
void print9(int n){
    for(int i=1; i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j<=stars;j++){
            cout <<"*";
        }
        cout<<endl;
    }
}

//pattern 9  is a combination of pattern 8 and 9

//pattern 8
void print8(int n){
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
void print7(int n){
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
void print6(int n){
    for(int i =1; i<=n; i++){
        for(int j=1 ; j<=n-i+1; j++){ 
            cout <<j<<" ";
        }
        cout << endl;
    }
}

//pattern 5
void print5(int n){
    for(int i =1; i<=n; i++){
        for(int j=n; j>=i; j--){ //or you can do in strivers playlist for(int j=0; j<n-i+1; j++)
            cout <<"* ";
        }
        cout << endl;
    }
}

//pattern 4
void print4(int n){
        for(int i=1; i<=n ; i++){
            for(int j=1; j<=i; j++){
                cout<<i << " " ; 
            }
           cout << endl;
        }
}

//pattern 3
void print3(int n){
        for(int i=1; i<=n ; i++){
            for(int j=1; j<=i; j++){
                cout<<j << " " ; //to print 
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
    print21(4);
    return 0;
}