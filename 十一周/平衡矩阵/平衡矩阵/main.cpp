#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    
    int n;
    
    while(cin>>n)
    {
        if(n==-1)break;
        int i=0;
        int j=0;
        int a[8][8]={0};
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        int max=70000,temp=0;
        for(int l1=0;l1<n;l1++)
            for(int l2=0;l2<n;l2++)
                for(int l3=0;l3<n;l3++)
                    for(int l4=0;l4<n;l4++)
                        for(int l5=0;l5<n;l5++)
                            for(int l6=0;l6<n;l6++)
                                for(int l7=0;l7<n;l7++)
                                {
                                    temp=0;
                                    for(int j=0;j<n;j++)
                                    {
                                        if(temp<a[0][(l1+j)%n]+a[1][(l2+j)%n]+a[2][(l3+j)%n]+a[3][(l4+j)%n]+a[4][(l5+j)%n]+a[5][(l6+j)%n]+a[6][(l7+j)%n])
                                            temp=a[0][(l1+j)%n]+a[1][(l2+j)%n]+a[2][(l3+j)%n]+a[3][(l4+j)%n]+a[4][(l5+j)%n]+a[5][(l6+j)%n]+a[6][(l7+j)%n];
                                        
                                    }
                                    if(max>temp)max=temp;
                                }
        
        cout<<max<<endl;
    }
    
}