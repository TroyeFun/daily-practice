#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    int a[20000];
    cin>>n;
    int i=0;
    int max=0;
    for(i=0;i<n;i++)
    {
        
        cin>>a[i];
        if(a[i]>max)max=a[i];
    }
    int j=0;
    unsigned s=0;
    
    for(i=0;i<n;i++)
    {
        j=a[i];
        int p=1;
        int t=i+1;
        for(t=i+1;t<n;t++)
        {
            if(a[t]>=j)
                p++;
            else break;
        }
        for(t=i-1;t>=0;t--)
        {
            if(a[t]>=j)
                p++;
            else break;
        }
        
        if(p*j>s) s=p*j;
        
        
        
    }
    
    
    cout<<s;
    
    
}