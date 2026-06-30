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
Node *createTree()
{
    int x;
    cin >> x;
    if (x == -1)
        return nullptr;
    Node *root = new Node(x);
    root->left = createTree();
    root->right = createTree();
    return root;
}
void traverse(Node *root)
{
    while (root)
    {
        if (!root->left)
        {
            cout << root->data << ' ';
            root = root->right;
        }
        else
        {
            Node *curr = root->left;
            while (curr->right && curr->right != root)
            {
                curr = curr->right;
            }
            if (curr->right == nullptr)
            {
                curr->right = root;
                root = root->left;
            }
            // Second visit
            else
            {
                cout << root->data << ' ';
                curr->right = nullptr;
                root = root->right;
            }
        }
    }
}
int main()
{
    Node *root = nullptr;
    root = createTree();
    traverse(root);
    return 0;
}