#include<iostream>
using namespace std;
int main ()
{
    int m=0,n=0;
    int i=0;
    int p=0;
    int j=0;
    cin>>m>>n;
    
    for(i=m+1; ;i++)
    {
        
        for(j=2;j<=i;j++)
        {
            if(i%j==0)break;
        }
        if(j==i){
            cout<<j;
            p++;
        }
        if(p==1)break;
    }
    for(i=j+1; ;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)break;
        }
        if(j==i){
            cout<<" "<<j;
            p++;
        }
        if(p==n)break;
    }
    return 0;
}