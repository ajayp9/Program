#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
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
void printIthNode(Node *head , int i){
    int p = 0;
    Node *temp = head;
    while(temp!=NULL && p<i){
        p++;
        temp = temp->next;
    }
    if(temp!=NULL){
        cout<<temp->data;
    }
   /* while(temp!=NULL){
        if(p = i){
            cout<<temp->data;
            break;
        }
        temp = temp->next;
        p++;
    }*/
}
int main(){
    Node *head = takeInput();
    int pos;
    cin>>pos;
    printIthNode(head , pos);
    cout<<endl;
}    