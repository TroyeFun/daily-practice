//
//  main.cpp
//  正方形
//
//  Created by 方鸿宇 on 16/9/23.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include <iostream>
using namespace std;
float haha(float i)
{
    if(i>=0)i=i;
    else i=-i;
    return (i);
}
int main()
{
    float x,y,t,p;
    char c=' ';
    cin>>x>>c>>y;
    t=haha(x);
    p=haha(y);
    if(t<=1&p<=1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}