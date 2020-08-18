#include<iostream>
using namespace std;

#include "singleLS.h"

int main()
{
    singleLS list1;
    list1.insert(4); 
    list1.insert(6);
    list1.insert(2);
    list1.insert(8);
    list1.insert(10);
    list1.insert(1);
    list1.insert(3);
    list1.insert(12);


    list1.display();
    cout<<endl;
   cout<<list1.size()<<endl;


   list1.partition(6);


    
}
