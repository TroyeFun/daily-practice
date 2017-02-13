#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int w,h;
    while(cin>>w>>h)
    {
        if(w==0&&h==0)break;
        else{
            char zhuan[20][20];
            for(int i=0;i<h;i++)
                for(int j=0;j<w;j++)
                    cin>>zhuan[i][j];
            for(;;)
            {
                int judge=0;
                for(int i=0;i<h;i++)
                {
                    for(int j=0;j<w;j++)
                    {
                        if(zhuan[i][j]=='@')
                        {
                            if(i-1>=0&&zhuan[i-1][j]=='.'){ zhuan[i-1][j]='@';judge=1;}
                            if(i+1<h&&zhuan[i+1][j]=='.') {zhuan[i+1][j]='@';judge=1;}
                            if(j+1<w&&zhuan[i][j+1]=='.') {zhuan[i][j+1]='@';judge=1;}
                            if(j-1>=0&&zhuan[i][j-1]=='.') {zhuan[i][j-1]='@';judge=1;}
                            
                        }
                    }
                }
                if(judge==0)break;
                
            }
            int sum=0;
            for(int i=0;i<h;i++)
                for(int j=0;j<w;j++)
                    if(zhuan[i][j]=='@')sum++;
            cout<<sum<<endl;
        }
    }
}
