#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int field[20][20]={0};
    for(int i=0;i<n;i++)
    {
        int paixu[400]={0};
        int t=0;
        int m,n,k;
        int a[400][2]={0};
        cin>>m>>n>>k;
        for(int j=0;j<m;j++)
            for(int k=0;k<n;k++)
            {
                cin>>field[j][k];
                paixu[t]=field[j][k];
                a[field[j][k]][0]=j;
                a[field[j][k]][1]=k;
                t++;
            }
        sort(paixu,paixu+t,greater<int>());
        int sum=0;
        int time=a[paixu[0]][0]+2;
        if(time+a[paixu[0]][0]+1>k)cout<<"0";
        else
        {
            sum+=paixu[0];
            for(int p=1;p<t;p++)
            {
                if(time+abs(a[paixu[p-1]][0]-a[paixu[p]][0])+abs(a[paixu[p-1]][1]-a[paixu[p]][1])+1+a[paixu[p]][0]+1>k)
                {
                    time=time+a[paixu[p-1]][1]+1;
                    break;
                }
                else
                {
                    time=time+abs(a[paixu[p-1]][0]-a[paixu[p]][0])+abs(a[paixu[p-1]][1]-a[paixu[p]][1])+1;
                    sum+=paixu[p];
                }
            }
            
        }
        cout<<sum<<endl;
        
    }
}