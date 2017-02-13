#include<iostream>
using namespace std;
struct Node
{
    int num;
    Node *next,*ahead;
    
};
Node *Cre(int n)
{
    Node *node=new Node;
    int t;
    cin>>t;
    node->num=t;
    Node *head=node;
    Node *tail=node;
    for(int i=1;i<n;i++)
    {
        node=new Node;
        cin>>t;
        node->num=t;
        tail->next=node;
        node->ahead=tail;
        tail=tail->next;
    }
    tail->next=head;
    head->ahead=tail;
    return head;
}

int main()
{
    int n1;
    cin>>n1;
    Node *head1=Cre(n1);
    int n2;
    cin>>n2;
    Node *head2=Cre(n2);
    head1->ahead->next=head2;
    head2->ahead=head1->ahead;
    for(int i=0;i<n1+n2;i++)
    {
        Node *temp=head1;
        for(int j=0;j<n1+n2-i-1;j++)
        {
            if(temp->num>temp->next->num)
            {
                int t=temp->num;
                temp->num=temp->next->num;
                temp->next->num=t;
            }
            temp=temp->next;
        }
    }
    cout<<head1->num;
    Node *temp=head1;
    for(int i=1;i<n1+n2;i++)
    {
        temp=temp->next;
        cout<<' '<<temp->num;
    }
    
}