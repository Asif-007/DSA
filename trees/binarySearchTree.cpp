#include<bits/stdc++.h>
using namespace std;
class  Node{
    public:
        int data;
        Node *right;
        Node *left;
        Node(int x){
            this->data = x;
            this->left = nullptr;
            this->right = nullptr;
        }
};
Node *bst(Node *root, int x){
    if(!root){
        root = new Node(x);
        return root;
    }
    if(root->data>x)
        root->left = bst(root->left, x);
    else    
        root->right= bst(root->right,x);
    return root;
}
void inorder(Node* root){
    if(!root)
        return;
    inorder(root->left);
    cout << root->data << ' ';
    inorder(root->right);
}
int main(){
    vector<int> a = {10,32,12,34,45};
    Node *root = nullptr;
    for(int i=0;i<a.size();i++)
        root = bst(root, a[i]);
    inorder(root);
    return 0;
}