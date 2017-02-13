#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int a[20000];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double j=0;//用来表示矩形的高度
    int p=0;
    int t=1;
    for(j=1;j<1000000;j++)
    {for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            t=1;//t用于计量矩形的宽度
            int k=0;
            for(k=i+1;k<n;k++)
            {
                if(a[k]>=j)
                    t++;
                else break;
            }
            for(k=i-1;k>=0;k--)
            {
                if(a[k]>=j)
                    t++;
                else break;
            }
            
            if(t*j>p)
                p=t*j;
        }
        
        
    }
        
    }
    cout<<p;
    
    return 0;
}