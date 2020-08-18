#include "myStack.h"
#include<iostream>

//private:
 void myStack::checkMin()
 {
  if(top==0)
                stkMin.push(arr[top]);
            else
                {
                    if(arr[top]<stkMin.top())
                        stkMin.push(arr[top]);
                }   
 }

void myStack::popMin(){
if(top>=0 && arr[top]==stkMin.top())
                    stkMin.pop();

 }


//public:

 myStack::myStack(int s){
    size = s;
    top = -1;
    arr = new int[size];
    for(int i=0;i<size;i++)
        {
            arr[i] = INT_MAX;
        }
 }

void myStack::push(int val)
{
    if(top==(size-1))
    cout<<"Stack overflow";
    else
    {
        top++;
        arr[top]=val; 
    }

    //calls the pushMin method
    checkMin();
}

void myStack::pop()
{
    if(top == -1)
    cout<<"Stack is empty";
    else
    {
        //calls popMin
        popMin();
        arr[top] = 0;
        top--;

    }
}

int myStack::peek()
{
    if(top==-1)
    {
        cout<<"The array is empty. "<<endl;
        return -1;
    }
                   
    else
        return arr[top];        
}

int myStack::getMin(int size)
{            
    return stkMin.top();    
}


