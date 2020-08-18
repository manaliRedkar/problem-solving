#include<iostream>
using namespace std;

#include "insertList.cpp"

void partition(myList list1, int part)
{

    //list1.display();
    //list1.head;

    Node* temp = head;
            if(head == NULL)
            {
                cout<<"No elements";
            }

            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }

            cout<<endl;

}

int main()
{
    myList list1;
     
    list1.insertNode(3);
    list1.insertNode(5);
    list1.insertNode(8);
    list1.insertNode(6);
    list1.insertNode(10);

    list1.display();
   cout<<"SIZE: "<<list1.size()<<endl;

    partition(list1, 6);
}
