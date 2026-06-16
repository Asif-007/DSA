#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(){}
        Node(int x){
            this->data = x;
            this->next = nullptr;
        }
};
void reverse(Node *head){

}
void display(Node *head){
    Node *temp = head;
    while(temp){
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
    return;
}
int main(){
    vector<int> a = {1,2,3,4};
    Node *head = new Node(a[0]);
    Node *temp = head;
    for(int i=0;i<a.size();i++){
        temp->next = new Node(a[i]);
        temp  = temp->next;
    }
    display(head);
    // reverse(head);
    // display(head);
    return 0;
}