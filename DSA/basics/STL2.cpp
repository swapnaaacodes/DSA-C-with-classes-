#include<bits/stdc++.h>
using namespace std;

// 3. list

void explainList(){
    list<int>ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(6); //{6, 5, 2, 4}

    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// 4. Deque

void explainDeque(){
    deque<int>dq;

    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}

    dq.push_front(4); // {4,1,2}
    dq.emplace_front(6); // {6, 4, 1, 2}

    dq.pop_back(); // {6, 4, 1}
    dq.pop_front(); // {4,1}

    dq.back();// prints the last element
    dq.front(); // prints the first element

    //rest functions same as vector
    //begin,end, rbegin, rend, size, swap, clear, insert

}

// 5. Stack LIFO-Last In First Out, generic functions are push.pop.top
 
void explainStack(){
    stack<int>st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.emplace(4); // {4,3,2,1}

    cout<< st.top(); // prints 4  btw "** st[2] is invalid **"
    st.pop(); // {3,2,1}
    st.top(); // prints 3
    st.size(); // prints 3

    cout<<st.empty();

    stack<int>st1,st2;
    st1.swap(st2);

    st.empty();
}

// time complexity of stack is big-oh notation -> O(1), everything happens in constant time 


// 6. Queue FIRST IN FIRST OUT
void explainQueue(){
    queue<int>q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}

    q.back()+=5;
    cout<<q.back(); // prints 9 because 4+5=9
    cout<<q.front(); // prints 1 because {1,2,9}

    q.pop(); // {2,9}
    q.front(); // prints 2
    q.size(); // 2

    queue<int>q1,q2;
    q1.swap(q2);

    q.empty();
}

// time complexity of queue is big Oh of 1 or O(1).


// 7. priority queue or max heap

void explainPQ(){
    priority_queue<int>pq;
    pq.push(1); // {1}
    pq.push(5); // {5,1}
    pq.push(3); // {5,3,1}
    pq.emplace(10); // {10,5,3,1}

    cout<< pq.top(); // {10}
    pq.pop(); // {5,3,1}
    cout<< pq.top(); // {5}

    // rest functions are same as others like size, swap, empty etc.



// 8. Minimum Heap/min heap


    priority_queue<int, vector<int>, greater<int>>sp;
    sp.push(5); // {5}
    sp.push(2); // {2,5}
    sp.emplace(1); // {1,2,5}

    cout<<sp.top(); // prints 1

    // rest functions same as others

}  // T.C of push,pop : log n, top : O(1)


// 9. SET means **sorted and unique**
// sets also can't be randomly accessed
// you can either move forward or backward
// you cannot do it+5 or access by index directly

void explainSET(){
    set<int>st;
    st.insert(1); // {1}
    st.insert(5); // {1,5}
    st.emplace(4); // {1,4,5}
    st.insert(2); // {1,2,4,5}
    st.insert(2); // {1,2,4,5}

    // {1,2,3,4,5}
    auto it = st.find(2); // returns iterator which points to 2.
    auto it = st.find(6); // returns st.end(), iterator which points after 5

    st.erase(5); // deletes 5 // takes logarithmic time

    int cnt = st.count(1); // if 1 is present, will print 1 occurence as set is unique
                            // if 1 is not present, will print 0

    auto it = st.find(3);
    st.erase(it);   // find iterator of the element, then deletes it
    // it takes constant time

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(5); 
    st.erase(it1,it2); // {1,5} [start,end)


    // lowerbound and upperbound check notes
    // {1,2,3,4,5}
    auto it = st.lower_bound(2); // prints index 1
    auto it = st.upper_bound(2); // prints index 2
    
    // every functions like inserting, erasing the T.C is (log N)

}