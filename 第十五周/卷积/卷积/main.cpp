#include<iostream>
using namespace std;
int a[1000]={0},b[1000]={0};
int m,n;
int juanji(int i)
{
    int value=0;
    for(int j=0;j<m;j++)
    {
        if(i-j<0)break;
        value+=a[j]*b[i-j];
    }
    return value;
}
int main()
{
    int t;
    cin>>t;
    for(int x=0;x<t;x++)
    {
        cin>>m>>n;
        for(int h=0;h<m;h++)
            cin>>a[h];
        for(int g=0;g<n;g++)
            cin>>b[g];
        for(int g=n;g<m+n+1;g++)
            b[g]=0;
        cout<<juanji(0);
        for(int k=1;k<m+n-1;k++)
        {
            cout<<' '<<juanji(k);
        }
        cout<<endl;
    }
}
