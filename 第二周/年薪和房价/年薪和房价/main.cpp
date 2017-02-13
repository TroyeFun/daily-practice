//
//  main.cpp
//  年薪和房价
//
//  Created by 方鸿宇 on 16/9/23.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    float X;
    float Q=0;
    float M;
    int N=1;
    int P=0;
    cin>>X>>M;
    Q=X;
    if(X>=M)
    {
        cout<<N<<endl;
        P++;
    }
    else
    {
        for(N=2;N<=100;N=N+1)
        {
            X=X*1.08;
            Q=Q+X;
            M=M*1.1;
            if(Q>=M)
            {
                cout<<N<<endl;
                P++;
                break;
            }
            
            
        }
    }
    if(P==0) cout <<"Forget it."<<endl;
    return 0;
}