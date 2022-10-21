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

bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Write your code here
    if(!root){
        return false;
    }
    
    if(root->data==k){
        return true;
    }
    else if(root->data>k){
        return searchInBST(root->left,k);
    }
    else{
        return searchInBST(root->right,k);
    }
}
int isNodePresent(BinaryTreeNode<int>* root , int val1 , int val2){
    if(!root){
        return 0;
    }
    int i=0;
    if(searchInBST(root,val1)){
        i++;
    }
    if(searchInBST(root,val2)){
        i++;
    }
    return i;
}

int getLCA(BinaryTreeNode<int>* root , int val1 , int val2){
    // Write your code here
    if(!root){
        return -1;
    }
    if(val1<root->data && val2<root->data){
         return getLCA(root->left,val1,val2);
    }
    else if(val1>root->data && val2>root->data){
        return getLCA(root->right,val1,val2);
    }
    else if(val1<root->data && val2>root->data){
        if(isNodePresent(root,val1,val2)==2){
            return root->data;
        }
    }
    else if(val1>root->data && val2<root->data){
        if(isNodePresent(root,val1,val2)==2){
            return root->data;
        }
    }
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int a, b;
    cin >> a >> b;
    cout << getLCA(root, a, b);
    delete root;
}