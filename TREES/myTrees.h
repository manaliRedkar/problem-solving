
struct Node
{
    int data;
    Node* left;
    Node* right;
};


class myBinarySearchTree
{
    private:

        Node* findMin(Node* current );
        void createNode(Node*& root,int newData);
        

    public:
        void insertNode(Node*& newRoot, int newData);
        void deleteNode(Node*& root, int deleteData);
        int findTilt(Node* root,int& tilt);
        int findHeight(Node* root);   //height in terms on ONLY edges: count of edges from root to the farthest leaf node
        bool checkBalance(Node* root);
        Node* searchBST(Node* root, int val); //searches a node and then returns it's subtree
        void inorder(Node* root); //display inorder fashion
        void levelOrderTraversal(Node* root);

        //inorder traversal: unbalanced BST to an array
        
        //STEP 1:
        void storeinArray(Node* root, int &pos, int arr[]);


        //STEP 2:
        Node* sortedArrayToBST(int arra[],int start,int end);



        void listDepth(Node* root); //makes each level into a linked list of its own

        int nodeDepth(Node* root, int finder, int &);
        int nodeDepthUtil(Node* root, int finder, int );


    
        

              
        
};

