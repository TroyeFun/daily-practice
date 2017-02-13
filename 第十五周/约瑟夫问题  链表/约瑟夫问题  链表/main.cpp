#include<iostream>
using namespace std;
struct Node
{
    int num;
    Node *next,*ahead;
};
Node *Create(int N)
{
    int n=1;
    Node *node=new Node;
    node->num=n;
    Node *head=node;
    Node *tail=node;
    while(n++<N)
    {
        node=new Node;
        node->num=n;
        node->ahead=tail;
        tail->next=node;
        tail=tail->next;
    }
    tail->next=head;
    head->ahead=tail;
    return head;
}
Node *Search(Node *head,int p)
{
    while(head->num!=p)
    {
        head=head->next;
    }
    return head;
}
Node *Release(Node *head,int t)
{
    int n=1;
    Node *temp=head;
    while(n!=t)
    {
        n++;
        temp=temp->next;
    }
    temp->next->ahead=temp->ahead;
    temp->ahead->next=temp->next;
    head=temp->next;
    cout<<temp->num<<',';
    delete temp;
    return head;
}
int main()
{
    int n,p,t;
    cin>>n>>p>>t;
    Node *head= Create(n);
    head=Search(head,p);
    while(head->next!=head)
    {
        head=Release(head, t);
    }
    cout<<head->num;
}