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

***********************************************************/

/*
	The first value of the pair must be the minimum value in the tree and 
	the second value of the pair must be the maximum value in the tree
*/
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        pair<int,int> p;
        p.first=-1;
        p.second=-1;
        return p;
    }
    
    pair<int,int> leftAns=getMinAndMax(root->left);
    pair<int,int> rightAns=getMinAndMax(root->right);
    int lMin=leftAns.first;
    int lMax=leftAns.second;
    int rMin=rightAns.first;
    int rMax=rightAns.second;
    
    /*int min=(lMin<rMin)?lMin:rMin;
    if(min!=-1){
        min=(min< root->data)?min:root->data;
    }
    else{
        min=root->data;
    }
    
    int max=(lMax>rMax)?lMax:rMax;
    max=(max> root->data)?max:root->data;*/
    
    int min;
    if(lMin==-1 && rMin!=-1){
        min=(rMin<root->data)?rMin:root->data;
    }
    else if(rMin==-1 && lMin!=-1){
        min=(lMin<root->data)?lMin:root->data;
    }
    else if(rMin==-1 && lMin==-1){
        min=root->data;
    }
    else{
        min=(lMin<rMin)?lMin:rMin;
    }
    min=(min<root->data)?min:root->data;
    
    int max=(lMax>rMax)?lMax:rMax;
    max=(max> root->data)?max:root->data;

    
    pair<int,int> p;
    p.first=min;
    p.second=max;
    return p;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    pair<int, int> ans = getMinAndMax(root);
    cout << ans.first << " " << ans.second;
}