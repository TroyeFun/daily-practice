//
//  main.cpp
//  等价划分类
//
//  Created by 方鸿宇 on 16/10/10.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int m=0,n=0,k=0;
    char c=' ';
    cin>>m>>c>>n>>c>>k;
    int i=0,j=0;
    int a[10000];
    int p=0;
    int t=0;
    for(j=1;j<40;j++)
    {
        p=0;
        
        for(i=m+1;i<n;i++)
        {
            if(((i%10000)/1000+(i%1000)/100+(i%100)/10+(i%10))%k==0)
            {
                if((i%10000)/1000+(i%1000)/100+(i%100)/10+(i%10)==j)
                {
                    a[p]=i;
                    p=p+1;
                }
                
                
            }
        }
        if(p!=0)
        {
            cout<<a[0];
            if(p>1)
            {
                for(t=1;t<p;t++)
                    cout<<","<<a[t];
            }
            cout<<endl;
        }
    }
}
