#include<iostream>
using namespace std;
double a[3];
void Rank(double *p,bool *q)
{
    if(*p>*(p+1))
    {
        double temp=*p;
        *p=*(p+1);
        *(p+1)=temp;
        bool temp1=*q;
        *q=*(q+1);
        *(q+1)=temp1;
    }
    if(*(p+1)>*(p+2))
    {
        double temp=*(p+1);
        *(p+1)=*(p+2);
        *(p+2)=temp;
        bool temp1=*(q+1);
        *(q+1)=*(q+2);
        *(q+2)=temp1;
    }
    if(*p>*(p+1))
    {
        double temp=*p;
        *p=*(p+1);
        *(p+1)=temp;
        bool temp1=*q;
        *q=*(q+1);
        *(q+1)=temp1;
    }
    
}
int main()
{
    char num[3][10];
    cin.get(num[0],10,',');
    cin.get();
    cin.get(num[1],10,',');
    cin.get();
    cin.get(num[2],10);
    bool judge[3]={0};
    for(int i=0;i<3;i++)
    {
        
        for(int j=0;j<strlen(num[i]);j++)
        {
            if(num[i][j]=='.')judge[i]=1;
        }
        a[i]=atof(num[i]);
        
    }
    Rank(a,judge);
    if(judge[0]==1)printf("%.2f",a[0]);
    else cout<<a[0];
    cout<<',';
    if(judge[1]==1)printf("%.2f",a[1]);
    else cout<<a[1];
    cout<<',';
    if(judge[2]==1)printf("%.2f",a[2]);
    else cout<<a[2];
    
}
