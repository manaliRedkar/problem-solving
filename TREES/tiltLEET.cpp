#include<queue>
#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};


class BinaryTreeTilt 
{
    private:
        Node* root;

    public:
        BinaryTreeTilt()
        {
            root = NULL;
        }


        void insertNode(int key)
        {
            //Node* temp;
            Node* p = new Node;
            p->data = key;

            queue<Node*> q; 
            q.push(p);

            while (!q.empty()) 
            { 
                Node* temp = q.front(); 
                q.pop(); 
        
                if (!temp->left) 
                { 
                    temp->left = p; 
                    break; 
                } 
                else
                    q.push(temp->left); 
        
                if (!temp->right) 
                { 
                    temp->right = p; 
                    break; 
                } 
                else
                    q.push(temp->right); 
            }

        } 


        void inorder(Node* root) 
        { 
            if(root ==NULL)
                return;

            inorder(root->left);
            cout<<root->data;
            inorder(root->right);


};


int main() 
{ 
    BinaryTreeTilt b1;
    Node * root;
    b1.insertNode(10);
    b1.insertNode(11);
    b1.insertNode(9);


    b1.inorder(root);
    
} 