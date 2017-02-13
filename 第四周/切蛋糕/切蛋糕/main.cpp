//
//  main.cpp
//  切蛋糕
//
//  Created by 方鸿宇 on 16/10/3.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
    int t=0;
    cin>>t;
    double r[100],a[100],b[100],c[100],d[100],e[100],f[100];
    int i=0;
    for(i=0;i<t;i++)
    {
        cin>>r[i]>>a[i]>>b[i]>>c[i]>>d[i]>>e[i]>>f[i];
    }
    for(i=0;i<t;i++)
    {
        double m=0,n=0,p=0;
        m=(a[i]*c[i]+b[i]*d[i])/(sqrt(a[i]*a[i]+b[i]*b[i])*sqrt(c[i]*c[i]+d[i]*d[i]));
        n=(a[i]*e[i]+b[i]*f[i])/(sqrt(a[i]*a[i]+b[i]*b[i])*sqrt(e[i]*e[i]+f[i]*f[i]));
        p=(e[i]*c[i]+f[i]*d[i])/(sqrt(e[i]*e[i]+f[i]*f[i])*sqrt(c[i]*c[i]+d[i]*d[i]));
        if((a[i]==0&&b[i]==0)||(c[i]==0&&d[i]==0)||(e[i]==0&&f[i]==0)) cout<<"No"<<endl;
        else if(m==1||n==1||p==1)cout<<"No"<<endl;
        else if((m>-0.5)&&(n>-0.5)&&(p>-0.5)) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
    
}