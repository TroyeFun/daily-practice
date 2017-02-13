//
//  main.cpp
//  跳绳
//
//  Created by 方鸿宇 on 16/9/26.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include <iostream>
using namespace  std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    int i=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    int j=0,h=0;
    if(a[0]>60||a[0]==0)cout <<"60"<<endl;
    else if(a[0]+3>60)cout<<a[0]<<endl;
    else
    {
        for(j=1;j<n;j++)
        {
            if(a[j]+3*j>60)
            {
                h=60-3*j;
                break;
            }
            else if(a[j]+3*(j+1)>60)
            {
                h=a[j];
                break;
            }
        }
        if(h==0)
            h=(60-3*n);
            cout<<h<<endl;
        
    }
    return 0;
}