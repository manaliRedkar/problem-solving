#include <iostream>
#include <queue>
#include<stack>
//#include "myStackusingQ.h"
using namespace std;


class MyStack {

private:
    queue<int> org;
    queue <int> temp;
     
    //This function pops all the elements of the original and pushes it to the temporary queue.
    void modifyOrg()
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
    void swapQ()
    {
        queue<int> qTem; //temporary variable to swap 2 queues
        qTem = org;
        org =temp;
        temp = qTem;
    }

public:
    /** Initialize your data structure here. */

    /** Push element x onto stack. */
    void push(int x) {
        temp.push(x); 
        modifyOrg();
        swapQ();
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
    if(empty())
        return -1;

    int orgPop = org.front();
    org.pop();
    return orgPop;
    }
    
    /** Get the top element. */
    int top() 
    { 
    if(empty())
        {
          cout<<" Hence, no top ";
          return 0;
        }
        cout<< org.front();
        return org.front();
        
    }

    bool empty() {
       if(org.empty())
            {
                cout<<" Stack is empty now.";
                return true;
            }
        return false;
    }
};



    void Test1()
    {
        MyStack obj1;
        obj1.push(32);
        obj1.push(-1);
        obj1.push(44);
        obj1.push(6);

        obj1.pop();
        obj1.top();
        //cout<<obj1.empty();
    
    }

    void Test2()
    {
        MyStack obj2;
        obj2.push(11);
        obj2.push(22);
        obj2.push(33);

        cout<<obj2.pop();
        
        //obj2.top();
        //obj2.pop();
        //obj2.pop();
        //obj2.top();


    }



    void Test3()
    {
        MyStack obj3;
        obj3.push(64);
        obj3.top();
        obj3.pop();
        obj3.top();
    }
    
int main()
{
    
    cout<< " ************** ";
     cout<<endl;
    cout<<"Test1: "; 
    Test1();
    cout<<endl;
    cout<< " ************** ";
     cout<<endl;
    cout<<"Test2: ";
    Test2();
    cout<<endl;
    cout<< " ************** ";
     cout<<endl;
    cout<<"Test3: ";
    Test3();
    cout<<endl;
    cout<< " ************** ";
    cout<<endl;
}