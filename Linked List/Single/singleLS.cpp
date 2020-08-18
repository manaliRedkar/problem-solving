#include<iostream>
#include"singleLS.h"
using namespace std;


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

    //Specifying an element to delete
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


//count of the current list
int singleLS::size()
{
    return count;
}


//Kth elemnt from the last 
int singleLS::kfromLast(int k)
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

void singleLS::display()
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

//Circular Linked List
void singleLS::displayCircular()
{
    Node *temp;
    temp = head;
    if(head==NULL )
    {
        cout<<"No elements inserted.";
        return;
    }

    int num =0;
    while(temp!=NULL && num < 16)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
        num++;
    }
}


void singleLS::displayAddr()
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
        cout<<temp<<" ";
        temp = temp->next;
    }
}


void singleLS::displayCircularAdr()
{
    Node *temp;
    temp = head;
    if(head==NULL)
    {
        cout<<"No elements inserted.";
        return;
    }

    int num=0;
    while(temp!=NULL && num<6)
    {
        cout<<temp<<" ";
        temp = temp->next;
        num++;
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
    // singleLS LL;
    // int a  = LL[4];
    // a should have the value of the 4th node
    /*int singleLS::operator[](int index)
    {
        
        while()
        return 0;
    }*/
    //Every time a iter function is called it will be incremented to the next element
    //For example: 1->2->3->14->67->
    //iter() : 1
    //iter() : 2
    //iter() : 3
    //iter() : 14
    //iter() : 67
    int singleLS::iter()
    {
        return 0;
    }

    Node* singleLS::intersection(singleLS list1, singleLS list2)
    {
        /*cout<<"print1 : ";
        list1.display(); 
        cout<<list1.size()<<endl<<endl;

        cout<<"print2 : ";
        list2.display();
        cout<<list2.size()<<endl<<endl;
        
        cout<<"START: "<<endl;*/

        Node* tempOne;
        tempOne = list1.head;

        Node* tempTwo;
        tempTwo = list2.head;

        int num;
        if(list1.size() > list2.size())
        {
            num = (list1.size()) - (list2.size());
            for(int i=0;i<num;i++)
            {
                tempOne = tempOne->next;
            }

        }

        else if(list1.size() < list2.size())
        {
            num = (list2.size()) - (list1.size());
            for(int i=0;i<num;i++)
            {
                tempTwo = tempTwo->next;
            }

        }

        
        while(tempOne != tempTwo)
        {
            tempOne = tempOne->next;
            tempTwo = tempTwo->next;
            if(tempOne==NULL && tempTwo==NULL)
            {
                return NULL;
            }
        }
        return tempOne;





        /*
        cout<<"one: "<<tempOne->data<<endl;

        cout<<"two: "<<tempTwo->data<<endl;
        */


    /*
        while(tempOne != tempTwo)
        {
            tempOne = tempOne->next;
            tempTwo = tempTwo->next;
            if(tempOne==NULL && tempTwo==NULL)
            {
                return NULL;
            }
        }
        return tempOne;

    */


    }


    void singleLS::partition(int part)
    {
        Node* runner = head;

        Node* smallHead = NULL;
        Node* largeHead = NULL;
        Node* smallTail = NULL;
        Node* largeTail = NULL;

        while(runner!=NULL) //&& trav->data!=part) 
        {
            if(runner->data < part)
            {
                if(smallHead==NULL && smallTail==NULL)
                {
                    smallHead=runner;
                    smallTail = smallHead;
                }
                    
                else
                {
                    smallTail->next = runner;
                    smallTail = smallTail->next;
                }
            }

            else
            {
                if(largeHead==NULL && largeTail==NULL)
                {
                    largeHead = runner;
                    largeTail = runner;
                }   
                else
                {
                    largeTail->next = runner;
                    largeTail = largeTail->next;
                }
                    
            }

            runner = runner->next;
        }



        /*
        cout<<"SMALL head:"<<smallHead->data<<endl;
        cout<<"SMALL tail:"<<smallTail->data<<endl;
        cout<<"LARGE head:"<<largeHead->data<<endl;
        cout<<"LARGE tail:"<<largeTail->data<<endl<<endl;*/

        smallTail->next = largeHead;
        
        Node *temp;
        temp = smallHead;


        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        
    }


void singleLS::insertNodeEnd(Node &n)
{
    count++;

    Node * temp;
    if(head==NULL)
    {
        head = &n;
    }
    
    else
    {
        //cout<<"i am getting printed "<< endl;
            
        temp = head;
        while(temp->next != NULL )
        {
            temp = temp->next;  
        }
        temp->next = &n; 
        temp = temp->next;
    }
    
    while(temp->next)
    {
        count++;
        temp = temp->next;
    }

}

void singleLS::insertNodeAny(Node &n)
{
    Node * temp;        
    temp = head;
    while(temp->next != NULL )
    {
        temp = temp->next;  
    }
    temp->next = &n; 
    //temp = temp->next;

}


int singleLS::loopDetection()
{ 
    Node* slow;
    slow = head;

    Node* fast;
    fast = head;

    slow = slow ->next;
    fast = fast->next->next;

    while(slow!=fast)
    {
        slow = slow ->next;
        fast = fast->next->next;
        if(slow->next==NULL || fast->next==NULL)
        {
            return -1;
        }
    }

    slow = head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast = fast->next;
    }

    return fast->data;

}

void singleLS::setHeadWithNode(Node *  newNode)
{
    if(head)
    {
        cout<<"failed to set node head is not empty"<<endl;
        return;
    }

    head = newNode;
}

