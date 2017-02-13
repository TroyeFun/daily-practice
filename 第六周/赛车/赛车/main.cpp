#include<iostream>
using namespace std;
int main()
{
    bool a,b,c,d;
    int j,k,l,h;
    
    for(j=0;j<2;j++)
        for(k=0;k<2;k++)
            for(l=0;l<2;l++)
                for(h=0;h<2;h++)
                {
                    a=j;
                    b=l;
                    c=!k;
                    d=!l;
                    if(a+b+c+d==1)
                        if(j+k+l+h==1)
                        {
                            if(h==1)cout<<"1";
                            if(j==1)cout<<"2";
                            if(k==1)cout<<"3";
                            if(l==1)cout<<"4";
                            cout<<endl;
                            if(a==1)cout<<"A";
                            if(b==1)cout<<"B";
                            if(c==1)cout<<"C";
                            if(d==1)cout<<"D";
                            
                        }
                    
                }
    return 0;
} 