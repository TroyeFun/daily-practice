//
//  main.cpp
//  四则运算
//
//  Created by 方鸿宇 on 16/9/21.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    char c=' ';
    cin>>a>>b>>c;
    int d=0;
    if(c=='+')
    {
        d=a+b;
        cout<<d<<endl;
    }
    
    else if(c=='-')
    {
        d=a-b;
        cout<<d<<endl;
    }
    else if(c=='*')
    {
        d=a*b;
        cout<<d<<endl;
    }
    else if(c=='/')
    {
        if (b==0) cout<<"Divided by zero!"<<endl;
        else
        {
            d=a/b;
            cout<<d<<endl;
        }
    }
    else cout <<"Invalid operator!"<<endl;
    return 0;
}
