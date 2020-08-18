#include<iostream>
#include"singleLS.h"
using namespace std;



//private:
        //Node* head;
        //int count;
        

   // public:

        singleLS::singleLS()
        {
            head = NULL;
            count = 0;
        }

        void singleLS::insert(int newData)
        {
                count++;

                Node* p = new Node;
                p->data = newData;
                p->next = NULL;

                if(head == NULL)
                {
                    head = p;
                    
                    //cout<<p->data<<endl;
                }
                else
                { 
                    Node *temp;
                    temp = head;
                    while(temp->next !=NULL)
                    {
                        temp = temp->next;
                    }
                    temp->next = p;
                    //cout<<p->data<<endl;    
                }      
                
        }
        
        void singleLS::insertAfter(int after, int newData)
        {
            count++;

            Node* p = new Node;
            p->data = newData;

            Node * temp;
            temp = head;
            while(temp->data!= after)
            {
                temp = temp->next; 
                if(temp->next == NULL)
                {
                    insertEnd(newData);
                }               
            }
            p->next = temp->next;
            temp->next = p;

        }
        

        void singleLS::insertEnd(int newData)
        {
            count++;

            Node *p = new Node;
            p->data = newData;
            p->next = NULL;

            if(head==NULL)
            {
                head = p;
            }
           
            else
            {
                //cout<<"i am getting printed "<< endl;
                Node * temp;
                temp = head;
                while(temp->next != NULL )
                {
                    temp = temp->next;  
                }
                temp->next = p; 
            }
                
            
        }

    
        void singleLS::deleteNode(int delData)
        {
            //cout<< "The count is: "<<count<<endl;
            count--;

            //Beginning node delete
            if(head->data == delData)
            {
                Node* tem;
                tem = head;
                head = head->next;
                free(tem);
                cout<<"The element "<<tem->data <<" is deleted. "<<endl;
                return;
            }

            //specifying an element to delete
                Node * prev;
                prev = head;

                Node* temp;
                temp = head->next;
            
            while(temp->data != delData )
            {
                
                prev = prev->next;
                temp = temp->next;  
                if(temp->next==NULL && temp->data != delData)
                {
                    cout<<delData<< " doesn't exist. "<<endl;
                    return;
                }
                    
            }

                cout<<"The element "<<temp->data <<" is deleted. "<<endl;
                    prev->next = temp->next;
                    return;
        }


        int singleLS::size()
        {
            cout<<"SIZE: ";
            return count;
        }


        void singleLS::display()
        {
            Node *temp;
            temp = head;
            if(head==NULL )
            {
                cout<<"There are no elements in the list."<<endl;
                return;
            }

            while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp = temp->next;
            }
        }

        void singleLS::reverse()
        {
            if(count == 1)
            {
                cout<<"Only one element, prints as it is."<<endl;
                return;
            }
        
                Node* prev;
                prev = NULL;
                Node* curr;
                curr = head;
                Node* after;
                after = NULL;

                while(curr!= NULL)
                {
                    after = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = after;
                }

                head = prev;

            cout<<"Reversed "<<endl;
        }



        void singleLS::deleteOccurence(int delData)
        {

            Node* curr = head;
            Node* prev = NULL;
            Node*after = NULL;

            //while loop to check of all the elements in the list
            while(curr!=NULL)
            {
                //This is if current is the data to be deleted
                if(curr->data == delData)
                {
                    //This to check if the current and head point to the same element that is to be deleted
                    if(curr==head)
                    {
                        head = head->next;
                        free(curr);
                        curr = head;
                    }

                    //Takes care of all elements but the head
                    else
                    {
                        after = curr->next;
                        prev->next = after;
                        curr->next = NULL;
                        free(curr);
                        curr = after;
                    }
                   
                }


                //if the linked list doesn't have the elements to be deleted
                else if(curr->next==NULL && curr->data != delData)
                {
                    cout<<delData<< " doesn't exist. So the list will print as it is."<<endl;
                }

                //if the element is not the delete data 
                else
                {
                    prev = curr;
                    curr = curr->next;
                }   
            }

        }



    /*int main()
    {
        SinglyLinkedList s1;
        //s1.insert(1);
        //s1.insert(2);
        //s1.insert(2);
        //s1.insert(2);
        //s1.insert(3);
        //s1.insert(2);
        s1.display();
        std::cout<<"CHANGE: "<<endl;

        s1.deleteOccurence(5);
      
        s1.display();
        cout<<endl;
        return 0;
    }
   */
