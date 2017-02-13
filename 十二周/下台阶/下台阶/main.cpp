#include<iostream>
using namespace std;
int step[1000]={0};
void taijie(int num,int left)
{
    if(left==0)
    {
        cout<<step[0];
        for(int i=1;i<num;i++)
            cout<<' '<<step[i];
        cout<<endl;
    }
    for(int i=1;i<=3;i++)
    {
        if(left-i>=0)
        {
            step[num]=i;
            taijie(num+1,left-i);
        }
        
    }
}
int main()
{
    int n;
    cin>>n;
    taijie(0,n);
    return 0;
}
