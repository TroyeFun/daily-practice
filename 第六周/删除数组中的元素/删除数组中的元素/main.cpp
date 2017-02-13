#include<iostream>
using namespace std;
int main()
{
    double n;
    double a[200000]={0};
    double t;
    cin>>n;
    int i=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    int p=0;
    cin>>t;
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            p++;
            
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
            i--;
        }
    }
    if(p==n-1)cout<<a[0];
    else
    {
        cout<<a[0];
        for(i=1;i<n-p;i++)
            cout<<" "<<a[i];
    }
    
    return 0;
    
    
}