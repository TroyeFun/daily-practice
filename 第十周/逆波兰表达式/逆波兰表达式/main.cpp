#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>
#include<algorithm>
using namespace std;
double cal()
{
    char a[10];
    cin>>a;
    switch(a[0])
    {
        case'+':return cal()+cal();
        case'-':return cal()-cal();
        case'*':return cal()*cal();
        case'/':return cal()/cal();
        default:return atof(a);
    }
}
int main()
{
    double a=cal();
    printf("%f\n",a);
    return 0;
}
