//
//  main.cpp
//  四边形
//
//  Created by 方鸿宇 on 16/10/6.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    double a[7],b[7];
    int i=0;
    while(cin>>a[0]>>b[0]>>a[1]>>b[1]>>a[2]>>b[2]>>a[3]>>b[3])
    {
        for(i=4;i<7;i++)
        {
            a[i]=a[i-4];
            b[i]=b[i-4];
        }
        int p=0;
        for(i=0;i<4;i++){
            
            if(((a[i+1]-a[i])*(b[i+2]-b[i])-(b[i+1]-b[i])*(a[i+2]-a[i]))*((a[i+1]-a[i])*(b[i+3]-b[i])-(b[i+1]-b[i])*(a[i+3]-a[i]))<=0)
            {
                cout<<"no"<<endl;
                p=1;
                break;
            }
        }
        if (p==0)cout<<"yes"<<endl;
    }
}