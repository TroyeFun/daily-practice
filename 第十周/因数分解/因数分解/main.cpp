#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int Count=0;
void s(int orgin,int t)
{
    if(orgin==1) Count++;
    else
    {
        for(int j=t;j>1;j--)
        {
            if(orgin%j==0) s(orgin/j,j);
        }
    }
}
int main()
{
    int n=0;
    cin>>n;
    int i=0;
    for(i=0;i<n;i++)
    {
        int orgin;
        Count =0;
        cin>>orgin;
        s(orgin,orgin);
        cout<<Count<<endl;
    }
}