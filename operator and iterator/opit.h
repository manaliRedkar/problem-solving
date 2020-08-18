#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    bool visited = false;

};

class opit{
    private:
        Node* head;
        Node *ptr ;// for itr()
    
        
        int count;
        

    public:

        opit();
        

        void insert(int newData);
        
        
        void insertAfter(int after, int newData);
        

        void insertEnd(int newData);
        
    
        void deleteNode(int delData);


        int size();


        void display();
        void reverse();
        
        int operator[](int);

        int iter();


        void deleteOccurence(int delData);
        

};