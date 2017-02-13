//
//  main.cpp
//  菲波那契函数
//
//  Created by 方鸿宇 on 16/9/26.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a[20];
    a[0]=1;
    a[1]=1;
    int i=0;
    for(i=0;i<20;i++)
    a[i+2]=a[i]+a[i+1];
    int n;
    int b[n];
    cin >>n;
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        b[i]=b[i]-1;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[b[i]]<<endl;
    }
    
    return 0;
    
    
    
    
}
