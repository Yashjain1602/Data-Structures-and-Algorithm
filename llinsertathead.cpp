#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertathead(Node* &head,int d)
{
    Node* temp = new Node(d);//New node creation
    temp-> next = head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1 = new Node(10);

    //HEAD POINTED TO NODE1
    Node* head = node1;
    print(head);
    insertathead(head,12);
    print(head);

    insertathead(head,15);
    print(head);
    return 0;
}