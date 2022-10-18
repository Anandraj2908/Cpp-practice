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

void printNodesWithoutSibling(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int>* currentNode=q.front();
        q.pop();
        if(currentNode->left!=NULL && currentNode->right==NULL){
            cout<<currentNode->left->data<<" ";
            
        }
        if(currentNode->left==NULL && currentNode->right!=NULL){
            cout<<currentNode->right->data<<" ";
            
        }
        if(currentNode->left!=NULL){ 
            q.push(currentNode->left);
        }
        if(currentNode->right!=NULL){ 
            q.push(currentNode->right);
        }
        
    }
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    printNodesWithoutSibling(root);
}