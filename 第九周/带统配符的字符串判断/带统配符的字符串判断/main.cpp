#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char c[100]={'\0'};
    char d[100]={'\0'};
    cin.getline(c,100);
    cin.getline(d,100);
    int l1=strlen(c);
    int l2=strlen(d);
    int i=0,j=0;
    int judge =1;
    for(i=0;i<l1;i++)
    {
        
        if(c[i]=='*')
        {
            if(c[i+1]!='?')
            {
                int t=0;
                for(j=j;j<l2;j++)
                    if(d[j]==c[i+1]&&d[j+1]==c[i+2])
                    {
                        t=1;
                        
                        break;
                    }
                
                if(t==0)
                {
                    
                    judge=0;
                    break;
                    
                }
            }
            else
            {
                int t=0;
                for(j=j+1;j<l2;j++)
                    if(d[j]==c[i+2]&&d[j+1]==c[i+3])
                    {
                        t=1;
                        
                        break;
                    }
                j--;
                
                if(t==0)
                {
                    
                    judge=0;
                    break;
                    
                }
                
                
            }
        }
        else if(c[i]=='?')
            j++;
        else if(c[i]!='?')
        {
            if(c[i]!=d[j])
            {
                judge =0;
                break;
                
            }
            else j++;
        }
        if(i==l1-2&&c[i+1]=='*')break;
        if((j==l2&&i!=l1-1)||(j!=l2&&i==l1-1))
        {
            judge =0;
            break;
        }
    }
    if(judge==0)cout<<"not matched"<<endl;
    else cout<<"matched"<<endl;
    
}