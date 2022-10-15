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

BinaryTreeNode<int>* buildTreeMain(int *preorder,int *inorder,int preS,int preE,int inS,int inE){
    if(inS>inE){
        return NULL;
    }
    int rootData=preorder[preS];
    int rootIndex=0;
    while(inorder[rootIndex]!=rootData){
        rootIndex++;
    }
    
    int lPreS=preS+1;
    int lInS=inS;
    int lInE=rootIndex-1;
    int lPreE=lInE - lInS + lPreS;
        
    int rPreS=lPreE+1;
    int rPreE=preE;
    int rInS=rootIndex+1;
    int rInE=inE;
    
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    root->left=buildTreeMain(preorder,inorder,lPreS,lPreE,lInS,lInE);
    root->right=buildTreeMain(preorder,inorder,rPreS,rPreE,rInS,rInE);
    return root;
}
BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
    return buildTreeMain(preorder,inorder,0,preLength-1,0,inLength-1);
}

int main() {
    int size;
    cin >> size;
    int *pre = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> pre[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(pre, size, in, size);
    printLevelATNewLine(root);
}