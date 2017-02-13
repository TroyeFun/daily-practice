//
//  main.cpp
//  发票
//
//  Created by 方鸿宇 on 16/10/10.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int a,n;
    int j=0;
    float t[3]={0,0,0};//用于记录 1、2、3三个人的发票金额的和
    float m[3]={0,0,0};//用于记录A、B、C三种发票金额的和
    for(i=0;i<3;i++)
    {
        cin>>a>>n;
        float d[100];
        char c[100];
        for(j=0;j<n;j++)
        {
            cin>>c[j]>>d[j];
            
        }
        for(j=0;j<n;j++)
        {
            t[a-1]=t[a-1]+d[j];
            if(c[j]=='A')
                m[0]=m[0]+d[j];
            if(c[j]=='B')
                m[1]=m[1]+d[j];
            if(c[j]=='C')
                m[2]=m[2]+d[j];
        }
        
        
    }
    cout<<"1"<<" ";
    printf("%.2f",t[0]);
    cout<<endl;
    cout<<"2"<<" ";
    printf("%.2f",t[1]);
    cout<<endl;
    cout<<"3"<<" ";
    printf("%.2f",t[2]);
    cout<<endl;
    cout<<"A"<<" ";
    printf("%.2f",m[0]);
    cout<<endl;
    cout<<"B"<<" ";
    printf("%.2f",m[1]);
    cout<<endl;
    cout<<"C"<<" ";
    printf("%.2f",m[2]);
    cout<<endl;
    return 0;
    
}