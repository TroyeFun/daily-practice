#include<iostream>
using namespace std;
int main()
{
    int a[10000]={0};
    
    int n;
    cin>>n;
    for(int s=2;s<=n/2;s++)
    {
        for(int j=2*s;j<=n;j+=s)
            a[j]=1;
        
    }
    for(int i=11;i<=n;i++)
    {
        int b[5]={0};
        b[0]=i%10;
        b[1]=(i/10)%10;
        b[2]=(i/100)%10;
        b[3]=(i/1000)%10;
        int w=0;
        for(w=4;w>=0;w--)
            if(b[w]!=0)break;
        w++;
        if(b[0]==b[w-1]&&b[1]==b[w-2])
            a[i]--;
        
        
    }
    int count=0;
    for(int i=11;i<=n;i++)
        if(a[i]==-1){cout<<i<<endl;count++;}
    cout<<count;
    
}

