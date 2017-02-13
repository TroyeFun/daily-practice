#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
char a[30]={'\0'};
int b=0;
void jinwei(int i,int n)
{
    if(i>=0)
    {
        if((a[i]-'0'+1)/n==1)
        {
            a[i]=char((a[i]-'0'+1)%n+'0');
            jinwei(i-1,n);
        }
        
        else a[i]=char((a[i]+1));
    }
    else
    {
        b++;
    }
}
int main()
{
    int n,k;
    char c;
    cin>>n>>c>>k>>c>>a;
    for(int i=1;i<=k;i++)
    {
        jinwei(strlen(a)-1,n);
        if(b==0)
            cout<<a;
        else if(b>=n)cout<<b/n<<b%n<<a;
        else cout<<b<<a;
        if(i%5==0)cout<<endl;
        else if(i!=k)cout<<',';
        
    }
    
}