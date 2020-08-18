#include<iostream>
using namespace std;
#include<queue>
#include "myTrees.h"

#include <list>



    //private:

        Node* myBinarySearchTree::findMin(Node* current )
        {
            while(current && current->left != NULL)
                current = current->left;

            return current;
        }
       
        void myBinarySearchTree::createNode(Node*& root,int newData)

        //createNode(root,arra[mid]);
        {
            Node* p = new Node();
            p->data = newData;
            p->left = p->right = NULL;
            root = p;
        }
         

    //public:
        void myBinarySearchTree::insertNode(Node*& newRoot, int newData)
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
        /*
        Node* createNode(int val)
        {
            Node *myNode = new Node;
            myNode->data = val;

            myNode->left = myNode->right = NULL;
            return myNode;
        }
        */

        void myBinarySearchTree::deleteNode(Node*& root, int deleteData)
        {

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
                        //cout<<"The root is: "<<root->data<<endl;
                        delete root;
                        root = NULL;
                    }
                    //Case 2: 1 child on the right
                    else if(root->left == NULL)
                    {
                        //cout<<"The root is: "<<root->data<<endl;
                        Node* temp = root;
                        root = root->right;
                        delete temp;
                    }

                    //Case 2: 1 child on the left
                    else if(root->right == NULL)
                    {
                        //cout<<"The root is: "<<root->data<<endl;
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
    
    
        /*  
            The tilt of a tree node is defined as the absolute difference between the sum of all 
            left subtree node values and the sum of all right subtree node values.
            Null nodes are assigned tilt to be zero. Therefore, tilt of the whole tree is defined as the sum of all nodes’ tilt.
        */

        int myBinarySearchTree::findTilt(Node* root,int& tilt) 
        {
            
            if(root==NULL)
                return 0;

            int left = findTilt(root->left,tilt);
            int right = findTilt(root->right,tilt);
            tilt = tilt+ abs(left - right);

            cout<<"ROOT: "<< root->data <<" : "<<abs(left - right)<<endl;

            return root->data + (left + right);
        }



        //Height in terms on ONLY edges: count of edges from root to the farthest leaf node
        int myBinarySearchTree::findHeight(Node* root)
        {
            if(root==NULL)
                return 0; 
            
            int left = findHeight(root->left);
            int right = findHeight(root->right);
            
            
            /*if(left>right)
                return left+1;
            else
                return right+1;
            */
            
            return (max(left, right) + 1);


        }


        bool myBinarySearchTree::checkBalance(Node* root)
        {   
            int lh=findHeight(root->left);
            int rh=findHeight(root->right);

            if(abs(lh - rh) > 1)
            {
                cout<<"FALSE";
                return false;
            }

            else
            {
                cout<<"TRUE";
                return true;
            }
                


        }


        //searches a node and then returns it's subtree
        Node* myBinarySearchTree::searchBST(Node* root, int val)
        {
            if(root==NULL || root->data == val)
                return root;

            else if(val<root->data) 
                root = searchBST(root->left,val);

            else if(val>root->data)
                root = searchBST(root->right, val);
            
            return root;
        
        }


        void myBinarySearchTree::inorder(Node* root)
        {
            if(root == NULL)
            {
                return;
            }

            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
            //return root;
        }

        void myBinarySearchTree::levelOrderTraversal(Node* root)
        {
            if(root==NULL)
                return;

            queue <Node*> q1;
            q1.push(root);
            while(!(q1.empty()))
            {
                Node* curr = q1.front();
                cout<<curr->data<<" ";
                
                if(curr->left !=NULL) 
                    q1.push(curr->left);
                if(curr->right !=NULL)
                    q1.push(curr->right);  
                q1.pop();

            } 
            
        }

        //inorder traversal: unbalanced BST to an array
        

        //STEP 1:
        void myBinarySearchTree::storeinArray(Node* root, int &pos, int arr[])
        {
             
            if(root==NULL) 
                return;

            storeinArray(root->left, pos, arr);
            arr[pos] = root->data;
            pos++;
            storeinArray(root->right, pos, arr);
        }


        //STEP 2:
    
        Node* myBinarySearchTree::sortedArrayToBST(int arra[],int start,int end){
            
            if(end<start)
                return NULL;
            
            int mid=(start+end)/2;
            Node* root = NULL;
            createNode(root,arra[mid]);

            root->left = sortedArrayToBST(arra,start, mid-1);
            root->right = sortedArrayToBST(arra, mid+1, end);
        
            return root;
        }
    
        //counts the depth of any integer 'finder'
        //int level=0;
        int myBinarySearchTree::nodeDepthUtil(Node* root, int finder, int level)
        {
            //cout<<"print dummy"<<endl;
            if(root==NULL )
                return 0;

            if(root->data == finder)
            {
                //cout<<endl<<"level is "<<++level<<endl;
                return level;
            }

             if(finder>root->data)
             {   
                level++;
                cout<<endl;
                //cout<<"right:";
                level = nodeDepthUtil(root->right,finder,level);
             }

            else if(finder<root->data)
            {   
                level++;
                cout<<endl;
                //cout<<"left:";
                level =nodeDepthUtil(root->left,finder,level);
            }

            else
                return level;


                return level;
        }
        int myBinarySearchTree::nodeDepth(Node* root, int finder, int &level)
        {
            int temp = nodeDepthUtil(root,finder,0);
            //cout<<endl<<"Temp value is "<<temp<<endl;
            return temp+1;
        /*
            if(finder>root->data)
                rightSide = nodeDepth(root->right, finder);
            else if (finder<root->data)
                leftSide = nodeDepth(root->left, finder);
            else
                return max(rightSide,leftSide)+1;
        */

        }
    

    void myBinarySearchTree::listDepth(Node* root)
    {
        if(root==NULL)
            return;
       
        int maxHeight = findHeight(root);
        cout<<"HEIGHT OF THE TREE INSIDE FUNT: "<<maxHeight;
        list<int> * arr = new list<int> [maxHeight]; 


        queue <Node*> q1;
        q1.push(root);
        int index = 0;
        while(!(q1.empty()) && index<maxHeight)
        {
            int qSize = q1.size();
        
            for(int j=0;j<qSize;j++)
            {
                Node* curr = q1.front();
                arr[index].push_back(curr->data);
    
                if(curr->left !=NULL) 
                    q1.push(curr->left);
                if(curr->right !=NULL)
                    q1.push(curr->right); 
                
                q1.pop();
            }
            index++;
        }

        cout<<endl;

        //DISPLAY
        for(int i=0;i<maxHeight;i++)
        {
            while(!arr[i].empty())
            {
                cout<<arr[i].front()<<" ";
                arr[i].pop_front();
            }
            cout<<endl;
        }
    }

        /*
       
        queue <Node*> q1;
        q1.push(root);
        while(!(q1.empty()))
        {
            Node* curr = q1.front();
            //cout<<curr->data<<" ";
            list<int> first = curr->data;
            
            if(curr->left !=NULL) 
                q1.push(curr->left);
            if(curr->right !=NULL)
                q1.push(curr->right); 
            q1.pop();
            list<int> second =  
        } 
        */

    
/*
    Node* myBinarySearchTree::newNode(int data) 
    { 
        Node* temp = new Node; 
        temp->data = data; 
        temp->left = temp->right = NULL; 
        return temp; 
    }
 
*/
    

  


