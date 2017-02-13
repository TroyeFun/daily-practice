//
//  main.cpp
//  最大-最小
//
//  Created by 方鸿宇 on 16/9/26.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//
#include<iostream>
using namespace std;
int max(int a,int b,int c)
{
    int d;
    if(a>b)d=a;
    else d=b;
    if(c>d)d=c;
    else d=d;
    return(d);
    
}
int min(int a,int b,int c)
{
    int d;
    if(a<b)d=a;
    else d=b;
    if(c<d)d=c;
    else d=d;
    return(d);
}

int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c;
    d=max(a,b,c);
    e=min(a,b,c);
    f=d-e;
    cout<<f<<endl;
    return 0;
        
    
}