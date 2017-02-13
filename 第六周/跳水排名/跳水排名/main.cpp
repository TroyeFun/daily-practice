#include<iostream>
using namespace std;
int main()
{
    bool cc1,cc2,cc3,cc4,cc5;
    int a,b,c,d,e;
    for(a=1;a<6;a++)
        for(b=1;b<6;b++)
            for(c=1;c<6;c++)
                for(d=1;d<6;d++)
                    for(e=1;e<6;e++)
                    {
                        cc1=((b==2)&&(a!=3))||((b!=2)&&(a==3));
                        cc2=((b==2)&&(e!=4))||((b!=2)&&(e==4));
                        cc3=((c==1)&&(d!=2))||((c!=1)&&(d==2));
                        cc4=((c==5)&&(d!=3))||((c!=5)&&(d==3));
                        cc5=((e==4)&&(a!=1))||((e!=4)&&(a==1));
                        if(cc1+cc2+cc3+cc4+cc5==5)
                            if((a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
                                cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e;
                        
                    }
    return 0;
}