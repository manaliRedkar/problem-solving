#include "myTrees.cpp"


int rangeSumBST(Node* root, int L, int R, int &count)
{
    if(root==NULL)
        return 0;

    
    rangeSumBST(root->left,  L,  R, count);
    if((root->data >= L && root->data <= R) )
        {
            count = count + root->data;
        }
    rangeSumBST(root->right,  L,  R, count);
return count;
}


int rangeSumBST(Node* root, int L, int R) {
    
  int count = 0;
  rangeSumBST(root,L,R,count);
  return count;

}


int main()
{
    Node* root= NULL ;
    int num;

    myBinarySearchTree b1;
    b1.insertNode(root, 10); 
    b1.insertNode(root, 5);
    b1.insertNode(root, 15);
    b1.insertNode(root, 3);
    b1.insertNode(root, 7);
    b1.insertNode(root, 18);
    b1.inorder(root);
    cout<<endl;
    cout<<rangeSumBST(root,7,15)<<endl;

}