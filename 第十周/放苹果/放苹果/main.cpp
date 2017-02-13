#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int ppap(int apple,int plate)
{
    if(apple<0)return 0;
    if(plate==1||apple==1||apple==0)return 1;
    return ppap(apple,plate-1)+ppap(apple-plate,plate);
}
int main()
{
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int m,n;
        cin>>m>>n;
        cout<<ppap(m,n)<<endl;
    }
}