//
//  main.cpp
//  前k大的数
//
//  Created by 方鸿宇 on 16/9/26.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//
#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int i=0,j=0,n=0;
    cin>>n;
    for(i=0;i<n;i++)
    
        cin>>a[i];
    
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(a[j-1]<a[j])
            {
                int temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    int k=0;
    cin>>k;
    for(i=0;i<k;i++){
        cout<<a[i]<<endl;}
    return 0;
    
}