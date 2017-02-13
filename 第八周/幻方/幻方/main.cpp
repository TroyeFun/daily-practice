#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[21][21]={0};
    cin>>n;
    int i=0,j=0;
    int num=1;
    for(num=1;num<=n*n;num++)
    {
        if(num==1)
        {
            i=0;
            j=(n-1)/2;
            a[i][j]=num;
        }
        else if(i==0&&j!=n-1)
        {
            i=n-1;
            j=j+1;
            a[i][j]=num;
        }
        else if(j==n-1&&i!=0)
        {
            j=0;
            i=i-1;
            a[i][j]=num;
        }
        else if(j==n-1&&i==0)
        {
            i++;
            a[i][j]=num;
        }
        else if(i!=0&&j!=n-1)
        {
            if(a[i-1][j+1]==0)
            {
                i--;
                j++;
                a[i][j]=num;
            }
            else if(a[i-1][j+1]!=0)
            {
                i++;
                a[i][j]=num;
            }
        }
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