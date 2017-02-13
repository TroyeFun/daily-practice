//
//  main.cpp
//  人民币支付
//
//  Created by 方鸿宇 on 16/9/26.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int a[6]={100,50,20,10,5,1};
    int n;
    cin>>n;
    int b[6]={0,0,0,0,0,0};
    int i=0;
    for(i=0;i<6;i++)
    {
        b[i]=(n-n%a[i])/a[i];
        n=n-b[i]*a[i];
    }
    for(i=0;i<6;i++)
        cout<<b[i]<<endl;
}