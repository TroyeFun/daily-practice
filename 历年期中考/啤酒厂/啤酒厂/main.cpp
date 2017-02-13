#include<iostream>
using namespace std;
int main()
{
    int n;
    int beer[10000];
    int dis[10000];
    cin>>n;
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>beer[i]>>dis[i];
        
        
    }
    int len=0;
    for(i=0;i<n;i++)
        len=len+dis[i];
    int poi=0;
    int pri[10000]={0};
    int j=0;
    for(poi=0;poi<n;poi++)
    {
        int dis1[10000]={0};
        for(i=poi+1;i<n;i++)
        {
            for(j=poi;j<i;j++)
            {
                dis1[i]=dis1[i]+dis[j];
            }
        }
        for(i=poi-1;i>=0;i--)
        {
            for(j=i;j<poi;j++)
            {
                dis1[i]=dis1[i]+dis[j];
            }
            
        }
        for(i=0;i<n;i++)
        {
            if((len-dis1[i])<dis1[i]) dis1[i]=len-dis1[i];
        }
        for(i=0;i<n;i++)
        {
            pri[poi]=dis1[i]*beer[i]+pri[poi];
        }
    }
    for(j=0;;j++)
    {
        int judge=0;
        for(i=0;i<n;i++)
        {
            if(pri[i]==j)
            {
                cout<<i<<","<<pri[i];
                judge=1;
                break;
            }
        }
        if(judge==1)break;
    }
    
    return 0;
    
}