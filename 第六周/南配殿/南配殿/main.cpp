//
//  main.cpp
//  南配殿
//
//  Created by 方鸿宇 on 16/10/19.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//
//南配殿
#include<iostream>

using namespace std;
int main()
{
    double n;
    double a[100000 ],b[ 100000];
    cin>>n;
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int j=0;
    
    for(i=n-1;i>0;i--)
        for(j=0;j<i;j++)
        {
            if(b[j]>b[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    int p=1;
    int t=0;
    for(i=1;i<n;)
    {
        if(a[i]>=b[t])
        {
            p++;
            t=i;
            i=t+1;
        }
        else i++;
    }
    cout<<p<<endl;
    return 0;
}
