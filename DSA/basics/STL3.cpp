#include<bits/stdc++.h>
using namespace std;


// 10. Multi Set is sorted, bidirectional and stores duplicate values unlike set

void explainMultiSet(){

    multiset<int>ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(1); // {1,2,2}
    
    
    ms.erase(2); // to delete all the 2's

    int cnt = ms.count(3); // to count the number of elements
    cout << cnt << "\n";


    // to erase only one 2's

    auto it = ms.find(2);
    if (it != ms.end()) {
        ms.erase(it);
    }
    for (int x : ms) {
        cout << x << " ";
    }
}

// 11. Unordered Set contains only unique elements
// unordered set is not sorted
// lowerbound and upperbound doesnt work, rest works
// better T.C than set in most cases, except some when collision happens

void explainUSet(){
    unordered_set<int>us;
}


// 12. Map  stores {key,value}, stored key in sorted order
// both can be of any data type, only key is unique

void explainMap(){
    map<int, int>mpp;
    map<int, pair<int,int>>mpp;
    map<pair<int,int>,int>mpp;
    


}


