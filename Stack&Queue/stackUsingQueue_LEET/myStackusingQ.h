#include <iostream>
using namespace std;
#include<queue>


class MyStack {

private:
    queue<int> org;
    queue <int> temp;
     
    //This function pops all the elements of the original and pushes it to the temporary queue.
    void modifyOrg();

     //This funtions swaps the 2 queues so that one can be pushed to another eventually
    void swapQ();
public:
    /** Initialize your data structure here. */

    /** Push element x onto stack. */
    void push(int x);
    
    /** Removes the element on top of the stack and returns that element. */
    int pop();
    
    /** Get the top element. */
    int top() ;
    bool empty();
    
};