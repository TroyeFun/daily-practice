#include<iostream>
#include<cmath>
using namespace std;
struct Node
{
    char num;
    Node *next;
};
char line[100]={0},res[101]={0};
Node *Cre(int l)
{
    Node *node=new Node;
    node->num=line[0];
    Node *head=node;
    Node *tail=node;
    for(int i=1;i<l;i++)
    {
        node=new Node;
        node->num=line[i];
        tail->next=node;
        tail=node;
    }
    tail->next=head;
    return head;
}
int cal(int l,int n)
{
    int i=0;
    for(i=0;i<l;i++)
    {
        int temp=(line[l-1-i]-'0')*n+res[i]-'0';
        res[i]=temp%10+'0';
        res[i+1]=temp/10+'0';
    }
    if(res[l]=='0')
        return l;
    else return l+1;
}
int main()
{
    while(cin>>line)
    {
        int l=strlen(line);
        Node *head=Cre(l);
        bool judge=0;
        for(int n=2;n<=l;n++)
        {
            res[0]='0';
            int t=cal(l,n);
            if(t!=l)
            {
                judge=1;
                break;
            }
            else
            {
                bool judge1=0;
                Node *temp=head;
                for(int j=0;j<l;j++)
                {
                    if(temp->num==res[l-1])
                    {
                        int i=0;
                        for(i=1;i<l;i++)
                        {
                            temp=temp->next;
                            if(temp->num!=res[l-1-i])
                                break;
                        }
                        if(i==l)
                        {
                            judge1=1;//当因数为n时， 循环成立
                            break;
                        }
                    }
                    else
                    {
                        temp=temp->next;
                    }
                }
                if(!judge1)
                    judge=1;
            }
        }
        cout<<line;
        if(!judge)
            cout<<" is cyclic"<<endl;
        else cout<<" is not cyclic"<<endl;
        
    }
}