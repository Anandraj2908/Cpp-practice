#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};

using namespace std;

BinaryTreeNode<int>* takeInput() {
    int rootData;
    
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
       
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        
        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

//Check if binaryT is BST
bool isGreater(BinaryTreeNode<int> *root,int n){
        if(!root){
            return true;
        }
        bool check=false;
        if(root->data>n){
            check=true;
        }
        return (isGreater(root->left,n) && isGreater(root->right,n) && check);
    }
    bool isSmaller(BinaryTreeNode<int> *root,int n){
        if(!root){
            return true;
        }
        bool check=false;
        if(root->data<n){
            check=true;
        }
        return (isSmaller(root->left,n) && isSmaller(root->right,n) && check);
    }
bool isBST(BinaryTreeNode<int> *root){
    if(!root){
        return true;
    }
    if(root->left && root->left->data>root->data){
        return false;
    }
    if(root->right && root->right->data<root->data){
        return false;
    }
    if( !isBST(root->left) || !isBST(root->right)){
        return false;
    }
    if(!isGreater(root->right,root->data)){
        return false;
    }
    if(!isSmaller(root->left,root->data)){
        return false;
    }
    return true;
}
//to find height of a binary tree
int height(BinaryTreeNode<int>* root) {
    if(root==NULL){
        return 0;
    }
    int max=1,h1,h2;
    h1=height(root->left);
    h2=height(root->right);
    (h1>h2)?max=h1:max=h2;
    return max+1;
}
//find height of largest BST
int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
    if(!root){
        return 0;
    }
    
    if(isBST(root)){
        return height(root);
    }
    int maxH=0;
    int hLeft=0,hRight=0;
    if(root->left){
        hLeft=largestBSTSubtree(root->left);
    }
    if(root->right){
        hRight=largestBSTSubtree(root->right);
    }
    maxH=(hLeft>hRight)?hLeft:hRight;
    return maxH;
    
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << largestBSTSubtree(root);
    delete root;
}