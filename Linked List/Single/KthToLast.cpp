#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class myList{
    private:
        Node* head;
        int count; 

    public:
        myList()
        {
            head = NULL;
            count = 0;
        }   

        void insertNode(int element)
        {
            Node* d = new Node;
            d->data = element;
            d->next = NULL;

            
            if(head==NULL)
            {
                head=d;
                count ++;
            }
            else
            {   
                Node* temp = head;
                while(temp->next !=NULL)
                {
                    temp=temp->next;
                }
                temp->next = d;
                count++;
            }
        }

        int size()
        {
            return count;
        }


        int KfromLast(int k)
        {
            if(head==NULL)
            {
                cout<<"EMPTY!! ";return 0;
            }
            int count = 0;
            Node* curr = head;
            Node* prev = head;

            while(curr->next !=NULL)
            {
                if(count>=k-1)
                    prev = prev ->next;

                curr = curr->next;
                count++;
            }

            return prev->data;

        }

            void display()
            {
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




};

/*

int main()
{
    myList list1;
     
    list1.insertNode(11);
    list1.insertNode(22);
    list1.insertNode(33);
    list1.insertNode(44);
    list1.insertNode(55);
 

    list1.display();
    cout<<"SIZE: "<<list1.size()<<endl;

    cout<<"ELEMENT: "<<list1.KfromLast(4)<<endl;

    
}*/


