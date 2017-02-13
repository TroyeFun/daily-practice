#include<iostream>
using namespace std;
int run(int year)
{
    if(year%400==0||(year%100!=0&&year%4==0))return 1;
    else return 0;
}
int week(int year,int month,int date)
{
    int days=0;
    for(int i=2000;i<year;i++)
    {
        if(run(i)==1)days+=366;
        else days+=365;
    }
    int monthr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int monthp[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(run(year)==1)
    {
        for(int i=0;i<month-1;i++)
        {
            days+=monthr[i];
        }
    }
    else
        for(int i=0;i<month-1;i++)
            days+=monthp[i];
    days+=date;
    return (days-2)%7;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int year,month,date;
        char c;
        cin>>year>>c>>month>>c>>date;
        char brand[7];
        cin>>brand;
        switch(week(year,month,date))
        {
            case 1:if(brand[5]=='1'||brand[5]=='6')cout<<"yes"<<endl;else cout<<"no"<<endl;break;
            case 2:if(brand[5]=='2'||brand[5]=='7')cout<<"yes"<<endl;else cout<<"no"<<endl;break;
            case 3:if(brand[5]=='3'||brand[5]=='8')cout<<"yes"<<endl;else cout<<"no"<<endl;break;
            case 4:if(brand[5]=='4'||brand[5]=='9')cout<<"yes"<<endl;else cout<<"no"<<endl;break;
            case 5:if(brand[5]!='1'&&brand[5]!='2'&&brand[5]!='3'&&brand[5]!='4'&&brand[5]!='6'&&brand[5]!='7'&&brand[5]!='8'&&brand[5]!='9')cout<<"yes"<<endl;else cout<<"no"<<endl;break;
            default:cout<<"no"<<endl;
        }
    }
}