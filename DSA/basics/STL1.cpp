#include<bits/stdc++.h>
using namespace std;

// 2. vector container continuation

void vectors(){
    vector<int>v1;
    vector<int>v2;

    vector<int>v(4,100);
    
    // to print
    for(auto i:v){
        cout<<i<<" " ;  // prints {100, 100, 100, 100}
    }

    
    // deletion

    // vector {10,20,30,40,50} to delete one element
    v.erase(v.begin()+1); //  o/p : {10,30,40,50}

    // to delete more than 1 element
    v.erase(v.begin(), v.begin()+2); // {30,40,50}



    // insertion-function

    vector<int>v = {100,100}; // {100,100}
    v.insert(v.begin(),300); // {300,100,100}
    v.insert(v.begin()+2,3,45); // {300,100, 45, 45, 45, 100}

    vector<int>copy(2,50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 100, 45, 45, 45, 100}

    
    // checks size

    // {10,20}
    cout<<v.size(); // 2
    v.pop_back(); // pops the last element in a vector {10}


    // swaps two vectors

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // v1 -> {30,40}, v2-> {10,20}
    

    v.clear(); // erases the entire vector

    cout<<v.empty(); // if the vector has atleast 1 elememt, it will print false
                     // if the vector has zero element, it will print true








}
int main(){
    vectors();
    return 0;
}

// deletion
