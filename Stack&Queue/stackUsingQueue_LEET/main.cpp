#include<iostream>
#include "myStackusingQ.h"

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