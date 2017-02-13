//
//  main.cpp
//  细菌繁殖
//
//  Created by 方鸿宇 on 16/10/12.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double  a[100],b[100],c[100];
    int i=0;
    for (i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        
    }
    double d[100];
    for(i=0;i<n;i++)
        d[i]=c[i]/b[i];
    double t=10000;
    for(i=0;i<n;i++)
    {
        if(d[i]<t)
            t=d[i];
    }
    int p=0,q=0;
    
    for(i=0;i<n-1;i++)
    {
        for(int j=n-2;j>=i ;j--)
        {
            if(d[j]>d[j+1])
            {
                double temp;
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
                int temp1;
                temp1=a[j];
                a[j]=a[j+1];
                a[j+1]=temp1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if((d[i-1]-d[0])<d[i]-d[i-1]) q=i;
        
    }
    p=n-q;
    
    cout<<p<<endl;
    for(i=q;i<n;i++)
        cout<<a[i]<<endl;
    cout<<q<<endl;
    for(i=0;i<q;i++)
        cout<<a[i]<<endl;
    
    return 0;
}