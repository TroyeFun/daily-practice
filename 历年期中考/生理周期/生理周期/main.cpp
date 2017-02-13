#include<iostream>
using namespace std;
int main()
{
    int t[10000],q[10000],z[10000],d[10000];
    int i=0;
    while(cin>>t[i]>>q[i]>>z[i]>>d[i])
    {
        if(t[i]<0||q[i]<0||z[i]<0||d[i]<0)
            break;
        else
        {
            t[i]=(t[i]-d[i]+23*20)%23;//求从给定时间起到下一次体力高峰的时间
            q[i]=(q[i]-d[i]+28*20)%28;
            z[i]=(z[i]-d[i]+33*20)%33;
            int day=1;
            for(day=1;day<=21252;day++)
            {
                if((day-t[i])%23==0&&(day-q[i])%28==0&&(day-z[i])%33==0)
                {
                    cout<<"Case "<<i+1<<": the next triple peak occurs in "<<day<<" days."<<endl;
                    break;
                }
            }
            
        }
        i++;
    }
    
    
    
    
}
