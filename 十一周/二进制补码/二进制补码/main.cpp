#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    char num[20];
    int n;
    while(cin>>num)
    {
        if(num[0]!='-'&&num[0]!='+'&&num[0]!='0'&&num[0]!='1'&&num[0]!='2'&&num[0]!='3'&&num[0]!='4'&&num[0]!='5'&&num[0]!='6'&&num[0]!='7'&&num[0]!='8'&&num[0]!='9')
            break;
        else
        {
            int b=atoi(num);
            char num2[32]={'\0'};
            int i=0;
            if(b>=0){
                for(i=0;i<32;i++)
                {
                    int t=pow(2,i);
                    num2[i]=char((b/t%2)+'0');
                    
                }
                for(i=31;i>=0;i--)
                {
                    cout<<num2[i];
                }
                cout<<endl;
            }
            else
            {
                num2[31]='1';
                b=-b-1;
                for(i=0;i<31;i++)
                {
                    int t=pow(2,i);
                    num2[i]=char((b/t%2)+'0');
                    
                }
                cout<<num2[31];
                for(i=30;i>=0;i--)
                {
                    if(num2[i]=='0')cout<<'1';
                    else cout<<'0';
                }
                cout<<endl;
            }
        }
    }
}