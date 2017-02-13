#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int t=0,move[10000]={0};
        int y=1;
        for(;;)
        {
            if(a==b)
                break;
            else if(a>b)
            {
                a=a-b;
                y++;
                move[t]=1;
                t++;
            }
            else if(a<b)
            {
                b=b-a;
                y++;
                move[t]=2;
                t++;
            }
        }
        int x=1;
        for(t=t-1;t>=0;t--)
        {
            if(move[t]==2)
                x=2*x-1;
            else if(move[t]==1)
                x=2*x;
        }
        cout<<(int)pow(2.0,1.0*(y-1))-1+x<<endl;
        
        
    }
}