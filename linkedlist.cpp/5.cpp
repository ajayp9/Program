#include<bits/stdc++.h>
using namespace std;
/*class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
    void print(Node *head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
    }
int main(){
    Node n1(1);
    Node *head=&n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    print(head);
}*/
class Test 
{ 
    int a; 
    int b; 
    Test() 
    {   
        this(10, 20);   
        System.out.print("constructor one "); 
    } 
    Test(int a, int b) 
    { 
        this.a = a; 
        this.b = b; 
        System.out.print("constructor two "); 
    } 
}
class new_test{
    public static void main(String[] args) 
    { 
        Test object = new Test(); 
    } 
} 