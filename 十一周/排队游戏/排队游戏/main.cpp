#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    char line[100];
    int a[50][2];
    cin>>line;
    int t=0;
    for(int j=strlen(line)-1;j>0;j--)
    {
        if(line[j]==line[strlen(line)-1])
        {
            int b=0,g=1;
            for(int i=j-1;i>=0;i--)
            {
                if(line[i]!=line[strlen(line)-1])b++;
                else g++;
                if(b==g)
                {
                    a[t][0]=i;
                    a[t][1]=j;
                    t++;
                    break;
                }
            }
            
        }
    }
    for(int i=t-1;i>=0;i--)
    {
        cout<<a[i][0]<<' '<<a[i][1]<<endl;
        
    }
    
}