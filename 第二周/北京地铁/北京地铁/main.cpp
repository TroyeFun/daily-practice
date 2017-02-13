//
//  main.cpp
//  北京地铁
//
//  Created by 方鸿宇 on 16/9/23.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int j=0;
    cin>>i>>j;
    float k=0;
    if(j<=6) k=3;
    else if (j<=12) k=4;
    else if(j<=22)k=5;
    else if(j<=32)k=6;
    else
    {
        if((j-32)%20==0)k=6+(j-32)/20;
        else k=7+(j-32)/20;
    }
    if(100<=i&i<150) k=0.8*k;
    else if(150<=i&i<400) k=0.5*k;
    printf("%.2f",k);
    return 0;
    
    
    
}