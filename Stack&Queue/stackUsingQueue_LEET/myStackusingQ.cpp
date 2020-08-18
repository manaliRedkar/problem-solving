#include "myStackusingQ.h"
using namespace std;


    //This function pops all the elements of the original and pushes it to the temporary queue.
    void MyStack::modifyOrg()
    {   
        int orgVal;//to hold value in the front() of the orginal queue
        while(!org.empty())
        {
            orgVal = org.front();
            org.pop();
            temp.push(orgVal);
        }
       
    }

     //This funtions swaps the 2 queues so that one can be pushed to another eventually
    void MyStack::swapQ()
    {
        queue<int> qTem; //temporary variable to swap 2 queues
        qTem = org;
        org =temp;
        temp = qTem;
    }

    /** Initialize your data structure here. */

    /** Push element x onto stack. */
    void MyStack::push(int x) {
        temp.push(x); 
        modifyOrg();
        swapQ();
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int MyStack::pop() {
    if(empty())
        return -1;

    int orgPop = org.front();
    org.pop();
    return orgPop;
    }
    
    /** Get the top element. */
    int MyStack::top() 
    { 
    if(empty())
        {
          cout<<" Hence, no top ";
          return 0;
        }
        cout<< org.front();
        return org.front();
        
    }

    bool MyStack::empty() {
       if(org.empty())
            {
                cout<<" Stack is empty now.";
                return true;
            }
        return false;
    }
