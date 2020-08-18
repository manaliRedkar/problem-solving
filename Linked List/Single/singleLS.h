#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    bool visit = false;
    
    Node()
    {
        next = NULL;
    }
    Node(int d)
    {
        data = d;
        next = NULL;
    }


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

        void insertNodeEnd(Node &n);
        void insertNodeAny(Node &n);

        int size();


        void display();
        void displayCircular();
        void displayCircularAdr();
        void displayAddr();
        void reverse();
        
        int operator[](int);

        int iter();


        void deleteOccurence(int delData);

        void partition(int part); //divides the right and left side with a part element

        int kfromLast(int k);

        Node* intersection(singleLS list1,singleLS list2);

        int loopDetection();

        void setHeadWithNode(Node * newNode);
        
        


};