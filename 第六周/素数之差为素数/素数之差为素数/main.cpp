//
//  main.cpp
//  素数之差为素数
//
//  Created by 方鸿宇 on 16/10/19.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double m=0,n=0;
    char a;
    cin>>m>>a>>n;
    double b[200000]={0},c[100000]={0};
    int i=0,j=0;
    b[0]=1;
    b[1]=1;
    double d[100000]={0};
    for(i=2;i<=sqrt(n);i++)
    {
        for(j=2*i;j<n;j=j+i)
        {
            b[j]=j;
        }
    }
    i=0;
    
    for(j=m;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(b[j]==0)
            {
                if(b[k]==0)
                {
                    if(b[k-j]==0)
                    {
                        c[i]=j;
                        d[i]=k;
                        i++;
                    }
                }
            }
            else break;
        }
        
    }
    
    for(i=0;i<100000;i++)
    {
        
        {
            if(c[i]!=0)
                cout<<"("<<c[i]<<","<<d[i]<<")"<<endl;
            else
                break;
            
        }
    }
    if (c[0]==0) cout<<"NULL";
    
    
    
}