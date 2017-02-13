#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[100][100]={'\0'};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        
        for(int j=0;j<x;j++)
            for(int k=0;k<x;k++)
                cin>>a[j][k];
        for(;;)
        {
            int judge=0;
            for(int p=0;p<x;p++)
            {
                for(int q=0;q<x;q++)
                {
                    if(a[p][q]=='s')
                    {
                        if(a[p][q+1]=='.'){a[p][q+1]='s';judge=1;}
                        if(a[p][q-1]=='.'){a[p][q-1]='s';judge=1;}
                        if(a[p+1][q]=='.'){a[p+1][q]='s';judge=1;}
                        if(a[p-1][q]=='.'){a[p-1][q]='s';judge=1;}
                        if(a[p][q+1]=='e'){judge=2;break;}
                        if(a[p][q-1]=='e'){judge=2;break;}
                        if(a[p+1][q]=='e'){judge=2;break;}
                        if(a[p-1][q]=='e'){judge=2;break;}
                    }
                }
                if(judge==2)break;
            }
            if(judge==0){cout<<"NO"<<endl;break;}
            else if(judge==2){cout<<"YES"<<endl;break;}
        }
        
    }
}