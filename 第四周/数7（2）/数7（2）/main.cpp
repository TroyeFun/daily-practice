//
//  main.cpp
//  数7（2）
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
        a[i]=i+1;//每个人的标号
        
    }
    int p=0,j=0;
    for( ; ; )
    {
        for(i=0;i<n;i++)
        {
            if(a[i]!=0){//遇到标号非零的接着报数
                j=j+1;//j为报的数
                
                if(j%7==0||j%10==7||(j%100)/10==7)//报的数能被七整除或者个位或十位含有数字七
                {
                    cout<<a[i]<<endl;
                    a[i]=0;//符合条件的人标记为零，表示已经被排除
                    p=p+1;//记录已经被排除的人数
                    
                }
            }
            
        }
        if(p==m)break;
        
    }
}