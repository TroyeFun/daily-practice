//
//  main.cpp
//  数7
//
//  Created by 方鸿宇 on 16/10/9.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//
#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n=0,m=0;
    cin>>n;
    m=n;
    int i=0;
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
        
    }
    int p=0,j=0,k=0;
    for( ; ; )
    {
        for(i=0;i<n;i++)
        {
            j=j+1;
            
            if(j%7==0||j%10==7||(j%100)/10==7)
            {
                cout<<a[i]<<endl;
                n=n-1;
                p=p+1;
                for(k=i;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                i=i-1;
            }
            
            
        }
        if(p==m)break;
        
    }
}