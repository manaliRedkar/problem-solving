
// C++ program to insert element in binary tree 
#include<iostream>
#include<queue> 
using namespace std; 
  
/* A binary tree node has key, pointer to left child 
and a pointer to right child */
  
struct Node { 
  int key; 
  Node *left, *right; 
  Node (int x) 
  { 
     key = x; 
     left = right = NULL; 
  } 
}; 
/*Pre-Order traversal of a binary tree
 <root> <left> <right>*/

void preorder(Node* temp)
{
    if(!temp)
        return;
    
    cout<<temp->key<<" ";
    preorder(temp->left);
    preorder(temp->right);
}  
/* Inorder traversal of a binary tree*/
void inorder(Node* temp) 
{ 
    if (!temp) 
        return; 
  
    inorder(temp->left); 
    cout << temp->key << " "; 
    inorder(temp->right); 
} 
/*Post order traversal for Binary Tree
<left><right><root> */
void postorder(Node* temp)
{
    if(!temp)
        return;
    
    postorder(temp->left);
    postorder(temp->right);
    cout<<(temp->key)<<" ";

}
  
/*function to insert element in binary tree */
void insert(Node* temp, int key) 
{ 
    queue<Node*> q; 
    q.push(temp); 
  
    // Do level order traversal until we find 
    // an empty place.  
    while (!q.empty()) { 
        Node* temp = q.front(); 
        q.pop(); 
  
        if (!temp->left) { 
            temp->left = new Node(key); 
            break; 
        } else
            q.push(temp->left); 
  
        if (!temp->right) { 
            temp->right = new Node(key); 
            break; 
        } else
            q.push(temp->right); 
    } 
} 



/*int findTilt(Node* temp){

    if(!temp)
        return 0;

    return abs(findTilt(temp->left) - findTilt(temp->right));
}*/
  
// Driver code 
int main() 
{ 
    Node* root = new Node(10); 
    root->left = new Node(11); 
    root->left->left = new Node(7); 
    root->right = new Node(9); 
    root->right->left = new Node(15); 
    root->right->right = new Node(8); 
  
    cout << "Inorder traversal before insertion:"; 
    inorder(root); 
  
    int key = 12; 
    insert(root, key); 
  
    cout << endl; 
    cout << "Inorder traversal after insertion:"; 
    inorder(root); 
cout << endl; 

     cout << "Preorder traversal after insertion:"; 
    preorder(root); 
cout << endl; 

     cout << "Post order traversal after insertion:"; 
    postorder(root); 

    cout<<endl;
    //cout<<findTilt(root);
    cout<<endl;
    return 0; 
} 