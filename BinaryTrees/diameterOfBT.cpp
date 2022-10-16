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
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}


//function to find height of BT
int height(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}

//function to find diameter 
int diameter(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }

    int option1= height(root->left)+height(root->right);
    int option2=diameter(root->left);
    int option3=diameter(root->right);
    return max(option1,max(option2,option3));
}

//function returns two values
pair<int, int> heightDiameter(BinaryTreeNode<int>* root){
    if(root ==NULL){
        pair<int,int> p;
        p.first=0;
        p.second=0;
        return p;
    }

    pair<int,int> leftAns = heightDiameter(root->left);
    pair<int,int> rightAns = heightDiameter(root->right);
    int ld =leftAns.second;
    int lh = leftAns.first;
    int rd= rightAns.second;
    int rh = rightAns.first;

    int height=1+max(lh,rh);
    int diameter=max(lh+rh,max(ld,rd));
    pair<int,int> p;
    p.first=height;
    p.second=diameter;
    return p;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout<<"Output"<<endl;
    pair<int,int> p=heightDiameter(root);
    cout<<"Height:"<<p.first<<endl;
    cout<<"Diameter:"<<p.second<<endl;
    delete root;
}

//not getting te output just understand the function returning two values