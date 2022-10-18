#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;

BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}
void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}
int isNodePresent(BinaryTreeNode<int> *root, int x,int y,int z) {
    // Write your code here
    if(root==NULL){
        return 0;
    }
    int i=0;
    if(root->data==x){
        i++;
    }
    if(root->data==y){
        i++;
    }
    if(root->data==z){
        i++;
    }
    return i+isNodePresent(root->left,x,y,z)+isNodePresent(root->right,x,y,z);

    
}
BinaryTreeNode<int>* lcaOfThreeNodes(BinaryTreeNode<int>* root, int node1, int node2, int node3) {
    // Write your code here.
    if(root==NULL){
        return NULL;
    }
    if(isNodePresent(root->left,node1,node2,node3)==3){
        return lcaOfThreeNodes(root->left,node1,node2,node3);
    }
    if(isNodePresent(root->right,node1,node2,node3)==3){
        return lcaOfThreeNodes(root->right,node1,node2,node3);
    }
    return root;
    
}
int main() {
    BinaryTreeNode<int> *root=takeInput();
    printLevelATNewLine(lcaOfThreeNodes(root,1,2,3));
}