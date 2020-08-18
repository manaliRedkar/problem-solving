#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;
};

class myBinarySearchTree
{
    private:
        Node* findMin(Node* current )
        {
            while(current && current->left != NULL)
                current = current->left;

            return current;
        }


        

    public:
        void insertNode(Node*& newRoot, int newData)
        {
            Node* p = new Node;
            p->data = newData;
            p->left = NULL;
            p->right = NULL;
            if(newRoot==NULL)
            {   
                newRoot = p;
                return;
            }

            if(p->data < newRoot->data)
            {
                if(newRoot->left == NULL)
                    {
                        newRoot->left = p;
                        return;
                    }

                insertNode(newRoot->left,newData);
            }
                
            if(p->data > newRoot->data)
            {
                //std::cout<<"i am here in right"<< endl;
                if(newRoot->right == NULL)
                {
                    //std::cout<<"i am here in right inside"<< endl;
                    newRoot->right = p;
                    return;
                }
                insertNode(newRoot->right, newData);
           }

        }

        void deleteNode(Node*& root, int deleteData)
        {
            //cout<<"This is printed root: "<< root->data<< " and the data to be deleted: "<< deleteData<<endl;

            if(root==NULL)
                cout<<"There is no element to be deleted, bc the tree is empty. ";
 
            else if(deleteData < root->data)
                deleteNode(root->left,deleteData);

            else if(deleteData > root->data)
                deleteNode(root->right, deleteData);

            else //found the element to be deleted
                {
                    
                    //Case 1: No child
                    if(root->left== NULL && root->right == NULL) //leaf nodes
                    {
                        cout<<"The root is: "<<root->data<<endl;
                        delete root;
                        root = NULL;
                    }
                    //Case 2: 1 child on the right
                    else if(root->left == NULL)
                    {
                        cout<<"The root is: "<<root->data<<endl;
                        Node* temp = root;
                        root = root->right;
                        delete temp;
                    }

                    //Case 2: 1 child on the left
                    else if(root->right == NULL)
                    {
                        cout<<"The root is: "<<root->data<<endl;
                        Node* temp = root;
                        root = root->left;
                        delete temp;
                    }

                    //Case 3: 2 children on rigth and left
                    else //left subtrees largest elemnent replaces the deleted node
                    {
                        cout<<"The root to be deleted is: "<<root->data<<endl;
                        //Node* temp = findMax(root);
                        Node* temp = findMin(root->right);
                        root->data = temp->data;
                        deleteNode(root->right, temp->data);
                        //deleteNode(root->right, temp->data);
                        
                    }
                } 
      
            }


    Node* findLCA(Node* root, int p, int q)
    {
        if(root==NULL)
            return root;
            //cout<<"No element "<<endl;

        if(root->data == p || root->data == q)
            return root;
        
         //handling two ways for the p element
        
            
            Node* l = findLCA(root->left, p ,q);
            Node* r = findLCA(root->right,p ,q);
             if (l!=NULL && r!=NULL)
                return root;

            if(l== NULL)
                return r;

            else
                return l;

    
     




    }



    void inorder(Node* root)
        {
            if(root == NULL)
                {
                    //cout<<"There are no elements ";
                    return;
                }

            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }
                           
        
};



int main()
{
    myBinarySearchTree s1;
    
    Node* root= NULL ;
    
    s1.insertNode(root, 1);
    s1.insertNode(root,22);
    s1.insertNode(root,54);

    s1.insertNode(root, 12); 
    
    s1.insertNode(root,15);
    s1.insertNode(root,200);
    s1.insertNode(root,64);
    
    s1.insertNode(root,66666 );
   


    s1.inorder(root);
    cout<<endl;

 

    cout<<(s1.findLCA(root,15,64))->data;

    cout<<endl;

}