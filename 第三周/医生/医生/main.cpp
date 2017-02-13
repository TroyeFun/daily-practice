//
//  main.cpp
//  医生
//
//  Created by 方鸿宇 on 16/9/25.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;

    int a[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int c[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int b[n];
    int i=0;
    int j=0;
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<15;i++)
    {
        for(j=0;j<100;j++)
        {
            if (b[j]==a[i]) c[i]=c[i]+1;
        }
    }
    int h=0;
    for(i=0;i<15;i++)
    {
        if(c[h]<c[i])  h=i;
        else h=h;
    }
    h=h+1;
    cout<<h<<endl;
    return 0;
}