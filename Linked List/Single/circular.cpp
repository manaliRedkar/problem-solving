#include "singleLS.h"

int main()
{
    singleLS list1;
    

    //list1.insert(1);
    //list1.insert(777);
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5); 

    
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n1;

    list1.setHeadWithNode(&n1);

    //list1.insertNodeEnd(n1);
    
    //cout<<endl;
    //cout<<"PRINT: ";

    list1.displayCircular();
    //cout<<endl;
    list1.displayCircularAdr();
    cout<<endl;

    cout<<"THE ELEMENT: "<<list1.loopDetection()<<endl;




}