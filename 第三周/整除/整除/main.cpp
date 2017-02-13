//
//  main.cpp
//  整除
//
//  Created by 方鸿宇 on 16/9/25.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int a=0,b=0,c=0;
    cin >>i;
    if(i%3==0) a=1;
    if(i%5==0) b=3;
    if(i%7==0) c=5;
    if(a+b+c==0) cout<<"n"<<endl;
    if(a+b+c==1) cout<<"3"<<endl;
    if(a+b+c==3) cout<<"5"<<endl;
    if(a+b+c==5) cout<<"7"<<endl;
    if(a+b+c==4) cout<<"3 5"<<endl;
    if(a+b+c==6) cout<<"3 7"<<endl;
    if(a+b+c==8) cout<<"5 7"<<endl;
    if(a+b+c==9) cout<<"3 5 7"<<endl;
    return 0;
}