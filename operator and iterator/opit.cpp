#include<iostream>
#include"opit.h"
using namespace std;



//private:
        //Node* head;
        //int count;
        

   // public:

        opit::opit()
        {
            head = NULL;
            count = 0;
            //visited = false;
        }

        void opit::insert(int newData)
        {
                count++;

                Node* p = new Node;
                p->data = newData;
                p->next = NULL;

                if(head == NULL)
                {
                    head = p;
                    ptr = head; //ptr only points to head and starts traversal( for itr())
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
        
        void opit::insertAfter(int after, int newData)
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
        

        void opit::insertEnd(int newData)
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

    
        void opit::deleteNode(int delData)
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


        int opit::size()
        {
            cout<<"SIZE: ";
            return count;
        }


        void opit::display()
        {
            Node *temp;
            temp = head;
            if(head==NULL )
            {
                cout<<"No elements inserted.";
                return;
            }

            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }

        void opit::reverse()
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



        void opit::deleteOccurence(int delData)
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
        // singleLS LL;
        // int a  = LL[4];
        // a should have the value of the 4th node
        int opit::operator[](int index)
        {
            //Node temp = *(head+ ((index-1) * sizeof(Node)) );
            //return temp.data;
            Node* root = head;
            if(root==NULL)
            {
                cout<<"Empty";
                return 0;
            }

            for(int i=0;i<index;i++)
            {
                root=root->next;
            }
            return root->data;
        }
        //Every time a iter function is called it will be incremented to the next element
        //For example: 1->2->3->14->67->
        //iter() : 1
        //iter() : 2
        //iter() : 3
        //iter() : 14
        //iter() : 67
        int opit::iter()
        {     
                
            if(ptr==NULL)
            {
                cout<<"Empty list";
                return 0;
            }   

            Node* ret = ptr;
            ptr=ptr->next;
            return ret->data;
    
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
