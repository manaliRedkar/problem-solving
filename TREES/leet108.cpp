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
           
           
        void createNode(Node*& root,int newData)
        {
            Node* p = new Node();
            p->data = newData;
            p->left = p->right = NULL;
            root = p;
            //return ;
        }



        Node* sortedArrayToBST(int arra[],int start,int end){
        
            if(end<start)
                return NULL;
            
            
         
            int mid=(start+end)/2;
            //cout<<" MID: "<<mid<<endl;
            Node* root = NULL;
            createNode(root,arra[mid]);
            //root = new Node();
            //root->data =arra[mid];
            //root->left = root->right = NULL;

            //cout<<"ROOT: "<<root->data<<endl;


            root->left = sortedArrayToBST(arra,start, mid-1);
            root->right = sortedArrayToBST(arra, mid+1, end);
         

            return root;

        }


     


        void inorder(Node* root)
        {
            if(root == NULL)
                return;
               

            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);

        }


                           
        
};



int main()
{
    myBinarySearchTree s1;
    
    Node* root= NULL ;
    //for leet 108
    int arr[] = {-10,-3,0,5,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size-1;
    
    root = s1.sortedArrayToBST(arr,start,end) ;

    s1.inorder(root);
    

    //for leet 

  

}