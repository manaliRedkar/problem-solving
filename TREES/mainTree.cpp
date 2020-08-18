#include"myTrees.h"
#include<iostream>

using namespace std;

 //Node* newNode(int data) ;
        /*{ 
            Node* temp = new Node; 
            temp->data = data; 
            temp->left = temp->right = NULL; 
            return temp; 
        } */

         //
                    

   Node* newNode(int data) 
    { 
        Node* temp = new Node; 
        temp->data = data; 
        temp->left = temp->right = NULL; 
        return temp; 
    }

int main()
{
    
    myBinarySearchTree s1;
    //unbalanced tree: manual
    Node* root= NULL ;
    root = newNode(50); 
    root->left = newNode(20); 
    root->right = newNode(60); 
    root->right->right = newNode(70);
    cout<<"Before CHECK: ";
    s1.checkBalance(root);
    cout<<endl;
    root->right->right->right = newNode(80);
    cout<<"After CHECK: ";
    s1.checkBalance(root);
    cout<<endl;

    /*
    Node* root= NULL ;
    //unbalanaced and balanced tree check
    s1.insertNode(root, 10); 
    s1.insertNode(root, 5);
    s1.insertNode(root, 15);

    s1.insertNode(root, 3);
    s1.insertNode(root, 7);

    s1.insertNode(root, 18);
    //s1.insertNode(root, 12);

    //cout<<"(INORDER TREE TRAVERSAL:)DISPLAY: ";s1.inorder(root);
    //cout<<endl;

    cout<<"Level: ";
    s1.levelOrderTraversal(root);
    cout<<endl;

    cout<<"HEIGHT: " << s1.findHeight(root)<<endl;
    int level = 0;
    level = s1.nodeDepth(root, 4, level);
    cout<<"LOCATED ON LEVEL: "<<level<<endl;
*/
   /* int tilt = 0; 
    s1.findTilt(root,tilt);
    cout<<"Tilt is "<<tilt<<endl;

    cout<<"HEIGHT: " << s1.findHeight(root)<<endl;

    cout<<"SEARCH BST for a node: ";
    root = s1.searchBST(root, 9);
    s1.inorder(root);
    cout<<endl;*/

/*
    cout<<"LIST: ";
    s1.listDepth(root);
    cout<<endl;*/
/*
    cout<<"ARRAY: ";
    int pos = 0;
    int arr[100];
    s1.storeinArray(root,pos,arr);

    
    for(int i =0 ; i < 5; i++)
    std::cout<<arr[i]<<" ";
    cout<<endl;


    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size-1;

    root = s1.sortedArrayToBST(arr,start,end) ;

*/






    
  
}


  


