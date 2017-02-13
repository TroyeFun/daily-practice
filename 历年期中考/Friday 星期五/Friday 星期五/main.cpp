#include<iostream>
using namespace std;
int leap(int year)
{
    if(year%400==0||(year%4==0&&year%100!=0))
        return 1;
    else return 0;
}
int main()
{
    int a[7]={0};
    int year=0,mon=0;
    int n=0;
    cin>>n;
    int monp[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int monr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    for(year=0;year<=n-1;year++)
    {
        for(mon=1;mon<=12;mon++)
        {
            int day=0;
            int i=0;
            for(i=1900;i<1900+year;i++)
            {
                if(leap(i)==1)day=day+366;
                else day=day+365;
            }
            for(i=1;i<=mon-1;i++)
            {
                if(leap(1900+year)==1)day=day+monr[i-1];
                else day=day+monp[i-1];
            }
            day=day+13;
            a[day%7]++;
        }
    }
    
    cout<<a[6];
    for(int i=0;i<6;i++)
    {
        cout<<" "<<a[i];
    }
    
}