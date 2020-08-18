#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

};

class singleLS{
    private:
        Node* head;
        int count;
        

    public:

        singleLS();
        

        void insert(int newData);
        
        
        void insertAfter(int after, int newData);
        

        void insertEnd(int newData);
        
    
        void deleteNode(int delData);


        int size();


        void display();
        void reverse();
        


        void deleteOccurence(int delData);
        

};