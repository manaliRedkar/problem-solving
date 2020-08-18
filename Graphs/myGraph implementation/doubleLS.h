#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

class doubleLS{

    private:
        Node* head;
        Node* tail;
        
    public:
        doubleLS();
        /*{
            head = NULL;
            tail = NULL;

            if(head!=NULL)
            {
                Node* ptr;
                ptr = head;
                while(ptr->next!=NULL)
                {
                    ptr = ptr->next;
                }
                ptr = tail;
            }

        }*/

        void insertData(int newData);
        /*{
            Node* p = new Node;
            p->data = newData;
            p->prev = NULL;
            p->next = NULL;

            Node* temp;
            temp=head;
            if(head == NULL)
            {
                head = p;
                tail =p;
            } 

            else
            {
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next =p;
                p->prev = temp;
                p->next =NULL;
                tail=p;
                //tail->prev = temp;
                //tail->next = p;
                //tail = p;
                
            }
                     
        }
*/

        void tailDisp();
        /*{
            cout<<"Tail is "<< tail->data<<endl;
        }*/

        void headDisp();
        /*{
            cout<<"Head is "<<head->data<<endl;
        }*/

        void insertAfter(int after, int newData);
        /*{
            Node* p = new Node;
            p->prev = NULL;
            p->data = newData;
            p->next = NULL;

            //when the 'after' element is the last(tail) element
            if(tail->data==after)
            {
                tail->next=p;
                p->prev = tail;
                p->next = NULL;
                tail =tail->next;
                return;
            }


            Node* temp;
            temp = head;
            while(temp->data!=after)
            {
                temp=temp->next;
            }
           
            p->next = temp->next;
            temp->next->prev = p;
            temp->next = p;
            p->prev= temp;
        }
*/

        void insertEnd(int newData);
        /*{
            Node* p = new Node;
            p->prev = NULL;
            p->data = newData;
            p->next = NULL;
                                        Not req:
                                        /*Node* temp;
                                        temp = head;

                                        while(temp->next!=NULL)
                                        {
                                            temp = temp->next;
                                        }

                                        temp->next = p;
                                        p->prev = temp;*/ 

            /*tail->next = p;
            p->prev=tail;
            tail = p;
        }*/
        
        

        void deleteNode( int delData);
        /*{
            Node* temp;
            
            //deleting when the list has no elements
            if(head==NULL)
            {
                cout<<"The list is empty. "<<endl;
                return;
            }

            //if the elements that needs to be deleted is the head element
            else if(head->data == delData )
            {
                cout<<"The element "<<delData<<" has been deleted."<<endl; 
                temp = head;
                head= head->next;
                head->prev= NULL;
                temp->next=NULL;
                free(temp);
                return;
            }

            //if deleting the tail element
            else if(tail->data == delData)
            {
                
                //cout<<"The tail is "<<tail->prev->data<<endl;
                cout<<"The element "<<delData<<" has been deleted."<<endl; 
                temp = tail;
                tail = tail->prev ;
                tail->next = NULL;
                temp->prev = NULL;
                free(temp);
                return;
            }

            //if it's  neither of the above cases
            else
            {
                temp = head;
                while(temp->data !=delData)
                {
                    temp = temp->next;
                    if(temp->next==NULL && temp->data!=delData)
                    {
                        cout<<"The element does not exist "<<endl;
                    }
                }
                cout<<"The element "<<delData<<" has been deleted."<<endl; 
                temp->prev->next=temp->next  ;
                temp->next->prev = temp->prev;   
                free(temp);
                return;
            }
                
            
            

        
        }
        */

    void reverse();
    /*{
        //cout<<"The tail is: "<<tail->data<<endl;

        Node* curr;
        curr = head;

        Node* aft;   
        //aft = head->next;

        while(curr!=NULL)
        {
            aft = curr->next;
            curr->next = curr->prev;
            curr->prev = aft;
            //curr->prev=aft;
            //aft = curr->next;
            curr = aft;
            /*if(curr->next==NULL)
            {   
                aft = curr->prev;
                curr->next = aft;
                curr->prev = NULL;
            }
            else
                aft = aft->next;*/

       // } 
        //curr = head;
        //head = tail;
        //tail=curr;
       
        
  //  }
    



        void display();
        /*{
            Node* temp;
            temp =head;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp =temp->next;
            }

            cout<<endl;
        }*/

        /*void displayend()
        {
            Node* temp;
            temp =tail;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp =temp->prev;
            }

            cout<<endl;
        }*/
        


    
        
        
        
};

/*
int main()
{
    DoubleLinkedList d1;
    d1.insertData(3);
    d1.insertData(6);
    d1.insertData(7);

    //1.insertAfter(7,66);
    d1.insertData(77);

    d1.display();
    //d1.reverse();
    d1.deleteNode(77);

    d1.display();

   //d1.headDisp();
   // d1.tailDisp();

    
}*/

