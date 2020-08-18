#include"myTrees.h"
#include<iostream>

using namespace std;


int main()
{
    
    myBinarySearchTree s1;
    
    Node* root= NULL ;
    //unbalanaced and balanced tree check
    s1.insertNode(root, 5); 
    s1.insertNode(root, 2);
    s1.insertNode(root, 7);
    s1.insertNode(root, 1);
    s1.insertNode(root, 3);
    s1.insertNode(root, 6);
    s1.insertNode(root, 12);
    s1.insertNode(root, 9);

    cout<<"DISPLAY: ";s1.inorder(root);
    cout<<endl;

    s1.deleteNode(root, 7);

    cout<<"DISPLAY: ";s1.inorder(root);

    //cout<<"TILT is: ";
    //cout<<s1.findTilt(root)<<endl;
    int tilt = 0; 
    s1.findTilt(root,tilt);
    cout<<"tilt is "<<tilt;

    //cout<<"Before CHECK "<<s1.checkBalance(root)<<endl;
}



/*
   //unbalanced tree: manual
    root = newNode(50); 
    root->left = newNode(20); 
    root->right = newNode(60); 
    root->right->right = newNode(70);
    root->right->right->right = newNode(80);
    cout<<"Before CHECK "<<s1.checkBalance(root)<<endl;

    cout<<"INORDER TREE TRAVERSAL: ";
    root = s1.inorder(root);
    cout<<endl;
    
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
    cout<<"After CHECK "<<s1.checkBalance(root)<<endl;
*/
    
    //s1.inorder(root);
    
    /*s1.insertNode(root,50);
    s1.insertNode(root, 20);
    s1.insertNode(root,60);

    s1.insertNode(root, 5); 
    s1.insertNode(root, 2);
    s1.insertNode(root, 7);
    s1.insertNode(root, 11); 
    s1.insertNode(root, 40); */

    //cout<<"HEIGHT: " << s1.findHeight(root);
    //cout<<endl;

    //cout<<"CHECK "<<s1.checkBalance(root)<<endl;

    /*
    cout<<"SEARCH: ";
    root = s1.searchBST(root, 10);
    s1.inorder(root);
    */
    
    
    


//:::::::TILT QUESTION ::::::::::
 /*   root = newNode(4); 
    root->left = newNode(2); 
    root->right = newNode(9); 
    root->left->left = newNode(3); 
    root->left->right = newNode(5); 
    root->right->right = newNode(7);
    s1.inorder(root);
    cout<<endl;

    

    
    
    s1.insertNode(root,15);
    s1.insertNode(root,2);
    s1.insertNode(root,6);
    
    s1.insertNode(root, 12);
    s1.insertNode(root, 18);

    //s1.insertNode(root, 17);
    //s1.insertNode(root, 19);
    
    //////////////////////////////////////

    root = newNode(3); 
    root->left = newNode(9); 
    root->right = newNode(20); 
    //root->left->left = newNode(3); 
    //root->left->right = newNode(5); 
    root->right->right = newNode(7);
    root->right->left = newNode(15);

    cout<<"INORDER DISPLAY: ";
    s1.inorder(root);
    cout<<endl;
    cout<<"Level: ";
    s1.levelOrderTraversal(root);

    
    cout<<endl;
*/
