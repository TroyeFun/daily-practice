#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int b[200]={0};//求100000以内的素数，初始化为零；
    b[0]=1;
    b[1]=1;//0和1不是素数，将其弄成非零的数
    int n=200;
    int i=0,j=0;
    for(i=2;i<=sqrt(n);i++) //i表示因数
    {
        for(j=2*i;j<n;j=j+i)
        {
            b[j]=1;  //如果某个数为i的倍数（倍数大于等于2），将其弄成非零数，剩下的数即为素数。i最大不超过根号n。
        }
    }
    for(i=0;i<n;i++)
        if(b[i]==0) cout<<i<<endl;
    
    
    return 0;
}