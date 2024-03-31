#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
int main(){
    Node *n3 = new Node(10);
    Node *head = n3;
    Node *n4 = new Node(20);
    n3->next = n4;
    cout<<n3->data<<" "<<n4->data;
}