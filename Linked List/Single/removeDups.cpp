#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class myList{
    private:
        Node* head;

    public:
        myList()
        {
            head = NULL;
        }   

        void insertNode(int element)
        {
            Node* d = new Node;
            d->data = element;
            d->next = NULL;

            if(head==NULL)
            {
                head=d;
            }
            else
            {   
                Node* temp = head;
                while(temp->next !=NULL)
                {
                    temp=temp->next;
                }
                temp->next = d;
            }
        }


        void removeDup(int delData)
        {
            Node* prev= NULL;
            Node* temp = head;
            if(head==NULL)
                cout<<"Empty list "<<endl;

            while(temp!=NULL)
            {
                
                if(temp->data == delData)
                {
                    if(temp == head)
                    {
                        head = head->next;
                        free(temp);
                        temp = head;
                    }

                    else
                    {
                        prev->next = temp->next;   
                        temp= temp->next;
                    }
                    
                }
                else
                {
                    prev = temp;
                    temp = temp->next;
                }

            }
        }

        void removeDup()
        {
            if(head==NULL)
            {
                    cout<<"Empty list, therefore nothing can be deleted."<<endl;
                    return;
            }

            Node* element = head;
            Node* counter= element->next;
            Node* prev = element;

            while(element!=NULL)
            {
                while(counter!=NULL)
                {
                    //prev = counter;
                    if(counter->data == element->data)
                    {
                        prev->next = counter->next;
                        free(counter);
                        counter = prev->next;
                    }
                    else
                    {
                        prev = counter;
                        counter = counter->next;
                    }
                        
                }

                
                element = element->next;
                if(element!=NULL)
                    {counter = element->next;

                prev = element;
                    //prev = counter;}
                
            }
             
        }
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


int main()
{
    myList list1;
     
     //list1.insertNode(22);
     //list1.insertNode(22);
     //list1.insertNode(22);
     /*list1.insertNode(13);
     list1.insertNode(11);
     list1.insertNode(22);

     list1.insertNode(13);*/


   

    
     
     
     
     

    list1.display();

    //list1.removeDup(11);
    list1.removeDup();
    list1.display();
}


