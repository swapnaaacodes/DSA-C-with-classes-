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
    map<int, pair<int,int>>mp;
    map<pair<int,int>,int>m2;
    
    // map<int,int>mpp
    mpp[1] = 2;
    mpp.emplace(3,1);
    mpp.insert({2,4});
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second << endl;
    }

    cout<<mpp[2] << endl; //prints 4 bcoz 2 is the key and 4 is the value
    auto it = mpp.find(1); // points at key 1
    cout<<(*it).second <<endl; // .first is key and .second is value

    auto p = mpp.lower_bound(3);
    cout << p->first << endl;   // key
    cout << p->second << endl;  // value
    auto q = mpp.upper_bound(2);
    cout << q->first << endl;   // key
    cout << q->second << endl;  // value


    // map<pair<int,int>,int>m2
    m2[{1,2}] = 10;
    m2.emplace(make_pair(make_pair(2,6),7));
    m2.insert({{3,6},10});
    for (auto itr : m2) {
        cout << itr.first.first << " " // {1}, {2}. {3}
             << itr.first.second << " " // {2}, {6}, {9}
             << itr.second << endl;// {10}, {7}, {10}
    }

    cout<<m2[{1,2}] << endl; //prints 4 bcoz 2 is the key and 4 is the value
    auto it = m2.find({3,6}); // points at key 1
    cout<<(*it).second <<endl; // .first is key and .second is value

    auto r = m2.lower_bound({2,6});
    cout << r->first.first << " ";   // key first
    cout << r->first.second << " "; // key second
    cout << r->second << endl;  // value
    auto s = m2.upper_bound({3,6});
    cout << s->first.first << " ";   // key first // prints *3*
    cout << s->first.second << " ";   // key second // prints *o*
    cout << s->second << endl;  // value // prints *garbage value*


    // erase,swap,size,empty same functions
}


