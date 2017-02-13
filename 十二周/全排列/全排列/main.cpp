#include<iostream>
using namespace std;
bool use[100]={0};
char out[100]={'\0'};
int l=0;
void quanpailie(char c[])
{
    for(int i=0;i<strlen(c);i++)
    {
        if(use[i]==0)
        {
            out[l]=c[i];
            use[i]=1;
            l++;
            if(l==strlen(c)){
                for(int j=0;j<strlen(c);j++)
                    cout<<out[j];
                cout<<endl;
                
            }
            else
            {
                quanpailie(c);
                
            }
            use[i]=0;
            l--;
        }
    }
}
int main()
{
    char c[100];
    cin>>c;
    quanpailie(c);
}