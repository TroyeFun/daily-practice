//
//  main.cpp
//  n！
//
//  Created by 方鸿宇 on 16/9/15.
//  Copyright © 2016年 方鸿宇. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n,s=1;
    cin>>n;
    if(n<0){
        cout<<"n的值无效"<<endl;
    }else{
        for(int i=1;i<=n;i++){
            s=s*i;
        }
        cout<<"n!等于"<<s<<endl;
    } 
    return 0;
}