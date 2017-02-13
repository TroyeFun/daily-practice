//
//  main.cpp
//  最简真分数
//
//  Created by 方鸿宇 on 16/10/13.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=0;
    int p=0;
    int m=0,t=0;
    for(i=n-1;i>0;i--)
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]!=0)
            {
                if(a[i]<a[j])
                {
                    if(a[i]==1)
                    {
                        cout<<a[i]<<"/"<<a[j];
                        p=1;
                        m=a[i];
                        t=a[j];
                        break;
                    }
                    else if(a[j]%a[i]!=0)
                    {
                        int q=0;
                        for(int c=2;c<=a[i];c++)
                        {
                            if(a[i]%c==0&&a[j]%c==0)
                            {
                                q=1;
                                break;
                            }
                        }
                        if(q==0)
                        {
                            cout<<a[i]<<"/"<<a[j];
                            p=1;
                            m=a[i];
                            t=a[j];
                            break;
                            
                        }
                    }
                }
            }
        }
        if(p==1) break;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]!=0)
            {
                if(a[i]<a[j])
                {
                    
                    if(a[i]!=m||a[j]!=t)
                    {
                        if(a[i]==1)
                        {
                            cout<<","<<a[i]<<"/"<<a[j];
                        }
                        else if(a[j]%a[i]!=0)
                        {
                            int q=0;
                            for(int c=2;c<=a[i];c++)
                            {
                                if(a[i]%c==0&&a[j]%c==0)
                                {
                                    q=1;
                                    break;
                                }
                            }
                            if(q==0)
                            {
                                cout<<","<<a[i]<<"/"<<a[j];
                                
                                
                            }
                            
                        }
                    }
                }
            }
        }
        
    }
    if(m==0&&t==0)cout<<"NO";
    return 0;
    
}