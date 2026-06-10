#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
    Node(){
        this->data = 0;
        this->next = nullptr;
    }
};
int main(){
    vector<int> a = {1,2,3,4,5};
    Node *head = new Node();
    head->data = a[0];
    Node *temp = head;
    for(int i=1;i<a.size();i++){
        temp->next = new Node;
        temp = temp->next;
        temp->data = a[i];
    }
    temp = head;
    while(temp){
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
    return 0;
}