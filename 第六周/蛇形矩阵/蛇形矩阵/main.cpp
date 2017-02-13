#include<iostream>
using namespace std;
int main()
{
    int a[1000][1000];
    int i=0,j=0;
    int n;
    cin>>n;
    int p=1;
    for( ; ; )
    {
        a[i][j]=p;
        if(i==0&&j!=n-1&&j%2==0)j++;
        else if(j==n-1&&((n+i)%2!=0))i++;
        else if(j==0&&i!=n-1&&i%2!=0)i++;
        else if(i==n-1&&(n+j)%2==0)j++;
        else if((i+j)%2!=0)
        {
            i++;
            j--;
        }
        else if((i+j)%2==0)
        {
            i--;
            j++;
        }
        
        
        
        p++;
        if(i==n||j==n)
            break;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i][0];
        for(j=1;j<n;j++)
        {
            cout<<" "<<a[i][j];
            
        }
        cout<<endl;
    }
    return 0;
    
    
} 