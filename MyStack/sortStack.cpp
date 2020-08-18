#include<iostream>
#include<stack>
using namespace std;

//function to sort an unsorted stack in a sorted order woth top being the smallest element and ascends as it goes to the botton of the stack

void display(stack <int>end);
void sortStack(stack<int> stk);


void sortStack(stack<int> stk)
{
    if(stk.empty())
    {
        cout<<"Empty stack";
        return;
    }

    int temp;

    stack<int> newStk;
    temp = stk.top();
    stk.pop();
    newStk.push(temp);

    while(!stk.empty())
    {
        temp = stk.top();
        stk.pop();

        while( !newStk.empty() && temp>newStk.top())
        {
            stk.push(newStk.top());
            newStk.pop();
        }

        newStk.push(temp);
    }

    display(newStk);


/*
    stack<int> newStk;
    int temp;

    temp = stk.top();
    stk.pop()
    if(newStk.empty())
    {
        newStk.push(temp);
    }


    while(!newStk.empty() && !stk.empty())
    {
        temp = stk.top();
        stk.pop()
        while(temp>newStk.top())
        {
            stk.push(newStk.top);
            newStk.pop();
            newStk.push(temp);
            newStk.push(stk.top());
            stk.pop();
            temp = stk.top();
            stk.pop()

        }
    }


*/

    /*
    cout<<"START TOP: "<<stk.top()<<endl;

    if(end.empty())
    {
        end.push(stk.top());
        stk.pop();
    }

    while(!stk.empty() && stk.top()< end.top())
    {
        if(temp.empty() || temp.top()< stk.top())
        {    
            temp.push(stk.top());
            stk.pop();
        }
        else
        {
            end.push(temp.top());
            temp.pop();
        }
    }

    if(stk.top()>end.top())
    {
        temp.push(end.top());
        end.pop();
        end.push(stk.top());
        end.push(stk.top());
    }
    

    while(!temp.empty())
    {
        end.push(temp.top());
        temp.pop();
    }

   
    

    cout<<endl<<"RESULT: ";
    display(end);
    cout<<"END TOP: "<<end.top()<<endl;
    */

   



}


void display(stack<int> anyStk) 
{
    
    while(!anyStk.empty())
    {
        cout<<anyStk.top()<<" ";
        anyStk.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int> stk;
    
    stk.push(4);
    stk.push(2);
    stk.push(3);
    stk.push(1);



   /* stk.push(13);
     stk.push(0);
    stk.push(0);
    stk.push(113);
     stk.push(211);
    stk.push(-130);
    stk.push(1309);*/
    
    


    /*stk.push(9);
    
 
    sortStack(stk);
    cout<<" *** "<<endl;

    stk.pop();
    sortStack(stk);

    cout<<" *** "<<endl;

    stk.push()*/
    sortStack(stk);

}