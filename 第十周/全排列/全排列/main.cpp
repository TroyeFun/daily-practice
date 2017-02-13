#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>
#include<algorithm>
using namespace std;
char a[27]={'\0'};
char b[27]={'\0'};
int use[27]={0};
void Rank(int i)
{
    if(i==strlen(a))cout<<b<<endl;
    
    for(int j=0;j<strlen(a);j++)
    {
        if(use[j]==0)
        {
            use[j]=1;
            b[i]=a[j];
            Rank(i+1);
            use[j]=0;
        }
    }
}
int main()
{
    cin>>a;
    Rank(0);
    return 0;
}