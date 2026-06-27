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


// 7. priority queue
