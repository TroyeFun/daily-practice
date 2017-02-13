#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int a[10000][3]={0};
int total;
int i=0;
void zuhe(int n1,int n2)
{
    if(n2*5<=total)
    {
        a[i][2]=n2;
        a[i][1]=n1;
        a[i][0]=total-n2*5-n1*2;
        i++;
        if(total-n2*5-n1*2<=1){n2++;n1=0;}
        else n1++;
        zuhe(n1,n2);
    }
}
int main()
{
    cin>>total;
    zuhe(0,0);
    for(int j=0;j<i;j++)
    {
        cout<<setw(3)<<setfill('0')<<j+1<<setw(12)<<setfill(' ')<<a[j][0]<<setw(12)<<a[j][1]<<setw(12)<<a[j][2]<<endl;
    }
    
}