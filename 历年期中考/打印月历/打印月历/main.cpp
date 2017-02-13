#include<iostream>
#include<iomanip>
using namespace std;
int leap(int year)
{
    if(year%4==0&&year%100!=0||year%400==0)
        return 1;
    else return 0;
}
int main()
{
    int year,mon;
    int mon1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int mon2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    cin>>year>>mon;
    cout<<" Sun Mon Tue Wed Thu Fri Sat"<<endl;
    int days=0;
    int i=0;
    for(i=1900;i<year;i++){
        if(leap(i)==1)days=days+366;
        else days=days+365;
    }
    for(i=0;i<mon-1;i++){
        if(leap(year)==1)days=days+mon2[i];
        else days=days+mon1[i];
    }
    int p=1;
    int d=days;
    for(i=0;i<(d+1)%7;i++)
        cout<<"    ";
    if(leap(year)==1)
        for(p=1;p<=mon2[mon-1];p++)
        {
            cout<<setw(4)<<p;
            if((p+d)%7==6)cout<<endl;
        }
    if(leap(year)==0)
        for(p=1;p<=mon1[mon-1];p++)
        {
            cout<<setw(4)<<p;
            if((p+d)%7==6)cout<<endl;
        }
    return 0;
    
    
    
}

