//
//  main.cpp
//  包剪锤
//
//  Created by 方鸿宇 on 16/9/26.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n=0;
      cin>>n;
    int a[n];
    int b[n];
    int i=0;
 
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int c[2]={0,0};
    for(i=0;i<n;i++)
    {
        if(a[i]==0&b[i]==1)c[0]++;
        if(a[i]==0&b[i]==2)c[1]++;
        if(a[i]==1&b[i]==0)c[1]++;
        if(a[i]==1&b[i]==2)c[0]++;
        if(a[i]==2&b[i]==0)c[0]++;
        if(a[i]==2&b[i]==1)c[1]++;
    }
     if(c[0]>c[1])cout<<"A"<<endl;
    else if(c[0]<c[1])cout <<"B"<<endl;
    else cout<<"Tie"<<endl;
    return 0;
}