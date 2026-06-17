#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        this->data = x;
        this->left = nullptr;
        this->right = nullptr;
    }
};
Node *binaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
        return nullptr;
    Node *root = new Node(x);
    root->left = binaryTree();
    root->right = binaryTree();
    return root;
}

void preOrder(Node *root)
{
    if (!root)
        return;
    cout << root->data << ' ';
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    if (!root)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << ' ';
}

void inOrder(Node *root)
{
    if (!root)
        return;
    inOrder(root->left);
    cout << root->data << ' ';
    inOrder(root->right);
}

void levelOrder(Node *root)
{
    if (!root)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
        cout << temp->data << ' ';
    }
}
int countLeaves(Node *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return 1;
    return countLeaves(root->left) + countLeaves(root->right);
}
int countNonLeaves(Node *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return 0;
    return 1 + countNonLeaves(root->left) + countNonLeaves(root->right);
}
int height(Node *root)
{
    if (!root)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}
int size(Node *root)
{
    if (!root)
        return 0;
    return 1 + size(root->left) + size(root->right);
}
int main()
{
    Node *root = binaryTree();
    cout << "Preorder Traversal : ";
    preOrder(root);
    cout << endl;
    cout << "Inorder Traversal : ";
    inOrder(root);
    cout << endl;
    cout << "Postorder Traversal : ";
    postOrder(root);
    cout << endl;
    cout << "Levelorder Traveral : ";
    levelOrder(root);
    cout << endl;
    cout << "Number of leaf Node : " << countLeaves(root) << endl;
    cout << "Number of non-leaf Node : " << countNonLeaves(root) << endl;
    cout << "Size of Tree : " << size(root) << endl;
    cout << "Height of Tree : " << height(root) << endl;
    return 0;
}