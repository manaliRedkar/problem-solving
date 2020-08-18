#include<stack>
#include<iostream>
using namespace std;

class MyQueue 
{
    private:
        stack <int> org;
        stack <int> temp;

        //Function which modifies the orginal stack to flip the order of elements 

        void modifyOrg(stack<int>& source, stack<int>& dest)
        {
            while(!source.empty())
            {
                
                int topSource;
                topSource = source.top();
                source.pop();
                dest.push(topSource);
                //cout<<"dest is : "<<dest.top()<<endl;
                //cout<<"org is : "<<org.top()<<endl;
            }
        }
        /*void modifyOrg()
        {
            while(!temp.empty())
            {
                int topTemp; //value popped from the temp to push it to the original
                topTemp = temp.top();
                temp.pop();
                org.push(topTemp);
            }  
        }
        */

    public:
    
        /** Push element x to the back of queue. */
        void push(int x) 
        {
            /*while(!org.empty())
            {
                int topOrg;
                topOrg= org.top(); //topVal holds the top most element of the orginal
                org.pop();
                temp.push(topOrg);
            }
            */
            
            
            modifyOrg(org,temp);
            temp.push(x); 
            modifyOrg(temp,org);
            
        }
        
        /** Removes the element from in front of queue and returns that element. */
        int pop() 
        {
            if(org.empty())
                return -1;

            int popValue ; //value that is popped and also returned for the user to see
            popValue = org.top();
            org.pop();
            return popValue;
        }
        
        /** Get the front element. */
        int peek() 
        {
            if(org.empty())
                return -1;
        
            return org.top();

        }
        
        /** Returns whether the queue is empty. */
        bool empty() 
        {
            if(org.empty())
                return true;
            else
                return false;
        }
};


void test1()
{
    MyQueue q1;
    q1.push(6);
    q1.push(7);
    q1.push(14);
    q1.push(22);

    cout<<q1.pop()<<endl;
    cout<<q1.peek()<<endl;
    cout<<q1.empty()<<endl;
}

void test2()
{
    MyQueue q2;
    q2.push(6);
    q2.push(4);
    q2.push(3);
    cout<<q2.pop()<<endl;
    cout<<q2.empty()<<endl;
    cout<<q2.pop()<<endl;
    cout<<q2.empty()<<endl;
    cout<<endl;
}

void test3()
{
    MyQueue q3;
    q3.push(1);
    q3.push(2);
    cout<<q3.peek() <<endl;
    cout<<q3.pop() <<endl;
    cout<<q3.empty()<<endl;
    cout<<q3.pop()<<endl;
    cout<<q3.pop()<<endl;

}

void test4()
{
    //["MyQueue","push","push","peek","push","peek"]
    //[[],[1],[2],[],[3],[]]

    MyQueue q4;
    q4.push(1);
    q4.push(2);
    cout<<q4.peek()<<endl; //1
    q4.push(3);
    cout<<q4.peek()<<endl; //1
}

int main()
{
    test1();
   cout<<" ********************** ";
   cout<<endl;
   test2();
   cout<<endl;
   cout<<" ********************** ";
   cout<<endl;
   test3();
   cout<<" ********************** ";
   cout<<endl;
   test4();
}