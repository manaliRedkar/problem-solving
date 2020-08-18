#include "singleLS.h"
int main()
{
    singleLS list1;
    list1.insert(55);
    list1.insert(12);
    list1.insert(6);
    list1.insert(2);

    singleLS list2;
    list2.insert(9);
    list2.insert(10);
    
    Node n1(8);
    Node n2(4);
    Node n3(5);


    n1.next = &n2;
    n2.next = &n3;

    list1.insertNodeEnd(n1);
    list2.insertNodeEnd(n1);



    list1.display();
    cout<<"   ";
    list1.displayAddr();
    cout<<endl<<" ******** "<<endl;

    list2.display();
    cout<<"   ";
    list2.displayAddr();
    cout<<endl<<endl;
    

    singleLS obj;

    cout<<endl<<"THE INTERSECTION: "<<obj.intersection(list1, list2)<<endl;
    cout<<endl<<"THE INTERSECTION: "<<obj.intersection(list1, list2)->data<<endl;
     

    

}