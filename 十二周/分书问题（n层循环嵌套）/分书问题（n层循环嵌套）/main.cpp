#include<iostream>
using namespace std;
bool use[100]={0};
int book[100];
int n;
bool like[100][100];
void ok(int p)
{
    for(int i=0;i<n;i++)
    {
        if(!use[i]&&like[p][i])
        {
            use[i]=1;
            book[p]=i+1;
            if(p==n-1)
            {
                cout<<book[0];
                for(int i=1;i<n;i++)
                    cout<<' '<<book[i];
                cout<<endl;
            }
            else ok(p+1);
            use[i]=0;
        }
    }
    
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>like[i][j];
    ok(0);
    
}