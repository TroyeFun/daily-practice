#include<iostream>
using namespace std;
int main()
{
    int a[200],b[200];
    int d[400]={0};
    char c[400];
    int i=0;
    for(i=0;;i++)
    {
        cin>>a[i];
        cin.get(c[i]);
        if(c[i]=='\n')break;
        
    }
    int num1=i+1;
    for(i=0;;i++)
    {
        cin>>b[i];
        cin.get(c[i]);
        if(c[i]=='\n')
            break;
        
    }
    int num2=i+1;
    int p=0;
    int j=0;
    for(i=num1;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            if(a[j-1]>a[j])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                
            }
        }
        
    }
    for(i=num2;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            if(b[j-1]>b[j])
            {
                int temp=b[j];
                b[j]=b[j-1];
                b[j-1]=temp;
                
            }
        }
        
    }
    
    for(i=0;i<num1;i++)
    {
        if(i==0||(i>0&&a[i]!=a[i-1]))
        {
            for(j=0;j<num2;j++)
            {
                if(j==0||(j>0&&b[j]!=b[j-1]))
                {
                    if(a[i]==b[j])
                    {
                        d[p]=a[i];
                        p++;
                    }
                }
            }
        }
    }
    if(p==0)cout<<"NULL";
    else
    {
        cout<<d[0];
        for(i=1;i<p;i++)
        {
            cout<<","<<d[i];
        }
    }
    
    
}