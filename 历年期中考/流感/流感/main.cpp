#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    char a[10000];
    
    for(i=0;i<n*n;i++)
    {
        cin>>a[i];
        
    }
    int m;
    cin>>m;
    for(int j=0;j<m-1;j++)
    {
        for(i=0;i<n*n;i++)
        {
            if(a[i]=='@')
            {
                if(i-n>=0&&a[i-n]=='.')
                    a[i-n]='c';
                if(i-1>=i/n*n&&a[i-1]=='.')
                    a[i-1]='c';
                if(i+1<(i/n+1)*n&&a[i+1]=='.')
                    a[i+1]='c';
                if(i+n<n*n&&a[i+n]=='.')
                    a[i+n]='c';
            }
        }
        for(i=0;i<n*n;i++)
        {
            if( a[i]=='c')
                a[i]='@';
            
        }
    }
    int p=0;
    for(i=0;i<n*n;i++)
        if(a[i]=='@')
            p++;
    cout<<p<<endl;
    return 0;
}