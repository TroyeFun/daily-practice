//
//  main.cpp
//  牛顿迭代
//
//  Created by 方鸿宇 on 16/10/6.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    while(cin >> a)
    {
        double b = 1.0;
        double c = 0;
        int i = 0;
        for (i = 1; ; i++)
        {
            c = b / 2 + a / (2 * b);
            b = c;
            if ((b*b - a)*((b - 1e-6)*(b - 1e-6) - a)<=0) break;
            
        }
        cout << i << ' ' << setprecision(2) << setiosflags(ios::fixed) << b << endl;
    }
    return 0;
    
}