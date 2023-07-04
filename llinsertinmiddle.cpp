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
void insertatposition(Node* &head,int position,int d)
{
    Node* temp = head;
    int count=1;
    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }
    //Now temp have the (position-1) node in it.
    //Create a node for d.
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;
}

void insertattail(Node* &tail,int d)
{
    Node* temp = new Node(d);//New node creation
    tail-> next = temp;
    tail = temp;
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
    Node* tail = node1;
    print(head);
    insertattail(tail,12);
    print(head);

    insertattail(tail,15);
    print(head);

    insertatposition(head,3,22);
    print(head);

    insertatposition(head,4,22);
    print(head);
    return 0;
}