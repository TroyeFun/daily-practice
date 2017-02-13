#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char c[100000]={'\0'};
    int n[10000]={0};
    int i=0;
    cin.getline (c,100000);
    char d[10000][100]={'\0'};
    int j=0;
    int k=0;
    for(k=0;k<100000;k++)
    {
        if(c[k]!='\0'){if(c[k]!=' '&&c[k]!=','&&c[k]!='.'&&c[k]!='_'&&c[k]!=';'&&c[k]!='?'&&c[k]!='!'&&c[k]!='('&&c[k]!=')'&&c[k]!='-')
        { d[i][j]=c[k];j++;}
        else if(d[i][0]=='\0') continue;
        else if(d[i][0]!='\0'
                ) {i++;j=0;}}
        else break;
        
    }
    
    int num=i;
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(d[i][0]!='\0')
            {
                if(d[j][0]==d[i][0]&&d[j][1]==d[i][1]&&d[j][2]==d[i][2]&&d[j][5]==d[i][5])
                {
                    n[i]++;
                    d[j][0]='\0';
                    
                }
            }
        }
    }
    
    for(i=0;i<num;i++)
    {
        if(d[i][0]!=0)
        {
            cout<<d[i]<<" "<<n[i]+1<<endl;
        }
        
    }
    
}

