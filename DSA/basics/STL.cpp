//stl means standard template library
#include<bits/stdc++.h>
using namespace std;

// functions
// 1. void function doesnot return anything.
void print(){
    cout <<"hello roshni";
};
int main(){
    print();
    return 0;
}



//2. return function
int inSum(int a, int b){
    return a+b;
}
int main(){
    cout<<"sum of two numbers a and b is: "<< inSum(10,12);
    return 0;
}



// containers

// 1. pair

void Pairss(){
    pair<int, int> p = {30,24};      // pair means 2
    cout<< p.first <<" "<<p.second<<"\n";  // inside the pair,indexing is {first,second}

    pair<int, pair<int,int>>q = {30,{6,4}};   // to store 3 elements, then {num1,{num2, num3}} 
    cout<<q.first <<" "<< q.second.first << " "<< q.second.second << endl; // indexing: {first, { second.first, second.second}}

    pair<int, int> arr[] = {{1,2},{5,6},{7,8}};
    cout<<arr[1].first<<endl; //indexing in the arr {0,1,2...so on} inside index 0{first,second} and so on.
}

int main(){
    Pairss();
}


// 2. vector is dynamic in nature.

void Vectorss(){

    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>q;
    q.push_back({1,2});
    q.emplace_back(1,2);

    vector<int>r(4,60); //container with a size of 4 and already has defined element 100
    vector<int>a(5);// this simply creates a container of size 5, containing any value given by the system


    
    //to copy container
    vector<int>v1(4,90);
    vector<int>v2(v1);



    // accessing elements in a vector


    // suppose the vector is {20,10,15,5,7}
    cout<<v[0]<<" "<<endl;  // indexing goes as [0,1,2,3,4], prints element at 0 index.
    cout<<v.back()<<" "; //prints element in the last index
    

    // iterator
    // 1. v.begin()

    vector<int>::iterator i = v.begin(); // v.begin points to the memory address of index 0 in a vector, it doesnot points to the element btw.
    i++; // from index 0, the pointer has no moved to the next index that is 1's memory address
    cout<<*(i)<<" "; // *(i) here * prints the element at index 1.
    i = i+2; // from index 1 to index 3
    cout<<*(i)<<" "; // now prints the element in index 3


    // 2. v.end()

    // example: vector{10,20,30,40}
    vector<int>::iterator i = v.end(); // it will point to memory location after 40
    //and if we do i--, then it will point to 40.

    // vector<int>::iterator it = y.rend(), check in copy.
    // vector<int>::iterator it = y.rbegin(), check in copy.
    


    // printing elements in a vector using for loop

    for(auto i=v.begin(); i!=v.end(); i++){   // auto , automically defines the data type[more like the system takes for it]
        cout<<*(i);
    }

    for(auto i:v){
        cout<<i<<" "; //auto simply iterates the vector and prints it
    }
}
