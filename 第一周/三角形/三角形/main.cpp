//
//  main.cpp
//  三角形
//
//  Created by 方鸿宇 on 16/9/17.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int max(int x ,int y,int z);
    int a,b,c;
    cin>>a>>b>>c;
    int d,e;
    d=a+b+c;
    e=max(a,b,c);
    if (d-e>e) cout <<"yes";
    else cout<<"no";
    return 0;
}
int max(int a,int b,int c)
{
    int d;
    if(a<b) d=b;
    else d=a;
    if(d<c) d=c;
    else d=d;
    return (d);
}