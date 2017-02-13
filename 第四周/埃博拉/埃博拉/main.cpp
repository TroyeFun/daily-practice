
#include<iostream>
using namespace std;
int main()
{
    int n,x,y,k;
    cin>>n>>x>>y>>k;
    int a[10],b[10];
    a[0]=n;
    b[0]=n;
    int i=0;
    for(i=1;i<(y-1);i++)
    {
        a[i]=(x+1)*a[i-1];
        b[i]=a[i-1]*x;
        
    }
    for(i=(y-1);i<10;i++)
    {
        a[i]=(a[i-1]-b[i-y+1])*(x+1);
        b[i]=(a[i-1]-b[i-y+1])*x;
    }
    cout<<a[k-1]<<endl;
    return 0;
}
