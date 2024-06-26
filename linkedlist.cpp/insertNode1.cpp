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
Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!=-1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}
void InsertNode(Node *head ,int i, int data){
    Node *newNode = new Node(data);
    int count=0;
    Node *temp = head;
    /*if(i==0){
        newNode->next = head;
        head = newNode;
        return head;
    }*/
    while(temp!=NULL && count<i-1){
        temp = temp->next;
        count++;
    }
    if(temp!=NULL){
    Node *a = temp->next;
    temp->next = newNode;
    newNode->next = a;
    }
   // return head;
}
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    Node *head = takeInput();
    print(head);
    int i,data;
    cin>>i>>data;
 InsertNode(head , i ,data);
    print(head);
}