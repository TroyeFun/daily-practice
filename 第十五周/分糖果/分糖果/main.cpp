#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int lovely[100000]={0};
int sweet[100000]={0};
void add(int i,int n)
{
    if(i==0)
    {
        if(lovely[0]>lovely[1])
            sweet[0]=sweet[1]+1;
    }
    else if(i==n-1)
    {
        if(lovely[n-1]>lovely[n-2])
            sweet[n-1]=sweet[n-2]+1;
    }
    else if(lovely[i-1]>lovely[i]&&lovely[i]>lovely[i+1])
    {
        sweet[i]=sweet[i+1]+1;
        add(i-1,n);
    }
    else if(lovely[i-1]<lovely[i]&&lovely[i]<lovely[i+1])
    {
        sweet[i]=sweet[i-1]+1;
        add(i+1,n);
    }
    else if(lovely[i]>lovely[i-1]&&lovely[i]>lovely[i+1])
    {
        if(sweet[i+1]>sweet[i-1])
            sweet[i]=sweet[i+1]+1;
        else sweet[i]=sweet[i-1]+1;
    }
    else if(lovely[i-1]==lovely[i])
    {
        if(lovely[i+1]<lovely[i])
            sweet[i]=sweet[i+1]+1;
    }
    else if(lovely[i+1]==lovely[i])
    {
        if(lovely[i-1]<lovely[i])
            sweet[i]=sweet[i-1]+1;
    }
    
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        sweet[i]=1;
    for(int i=0;i<n;i++)
    {
        cin>>lovely[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(lovely[0]<=lovely[1])
                add(1,n);
        }
        else if(i==n-1)
        {
            if(lovely[n-1]<=lovely[n-2])
                add(n-2,n);
        }
        else if(lovely[i]<=lovely[i+1]&&lovely[i]<=lovely[i-1])
        {
            add(i-1,n);
            add(i+1,n);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=sweet[i];
    }
    cout<<sum<<endl;
}