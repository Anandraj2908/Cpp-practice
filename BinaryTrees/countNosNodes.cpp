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


void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int>* currentNode=q.front();
        q.pop();
        cout<<currentNode->data<<":";
        if(currentNode->left!=NULL){
            cout<<"L:"<<currentNode->left->data<<",";
            q.push(currentNode->left);
        }
        else{
            cout<<"L:-1,";
        }
        if(currentNode->right!=NULL){
            cout<<"R:"<<currentNode->right->data;
            q.push(currentNode->right);
        }
        else{
            cout<<"R:-1";
        }
        cout<<endl;
    }
}

//count number of nodes
int countNodes(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    return countNodes(root->left)+countNodes(root->right)+1;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    printLevelWise(root);
    int nodes=countNodes(root);
    cout<<"Nodes="<<nodes;
}