//
//  main.cpp
//  不为最大数之和1
//
//  Created by 方鸿宇 on 16/9/26.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//
#include<iostream>
using namespace std;

int main()
{
    int n=0;
    cin>>n;
    int a[100];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=0;
    for(j=n-1;j>=1;j=j-1)
    {
        if(a[j]>a[j-1])
        {
            int temp;
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
    }
    int e=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[0]) e=e+a[i];
    }
    cout<<e<<endl;
}
