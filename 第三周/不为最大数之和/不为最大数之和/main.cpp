//
//  main.cpp
//  不为最大数之和
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
    int a[1000];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<max(n,a[n])) d=d+a[i];
    }
    cout<<d<<endl;
}
int max(int N,int c[N])
{
    int i=0;
    int j=0;
    for (i=0;i<N;i++)
    {
        if(c[i]>c[j]) j=i;
    }
    return (c[j]);
}