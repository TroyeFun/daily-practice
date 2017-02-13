#include<iostream>
using namespace std;
int main()
{
    int k;
    int a[13]={2,2,2,2,2,440,1870,7630,1740,93300,459900,1358650,2504880};//经检验对应的m分别为2，7，5，30，169，441，1872，7632，1740，93313，459901，1358657，2504881.
    while(cin>>k)
    {
        if(k==0)break;
        
        else{
            int m=0;
            for(m=a[k-1];;m++)
            {
                int a[26]={0};
                int count=0;
                int i=0;
                int num=0;
                int judge=1;
                
                for (;;)
                {
                    for(i=0;i<2*k;i++)
                    {
                        if(a[i]==0)
                        {
                            count++;
                            
                            if(count%m==0)
                            {
                                num++;
                                a[i]=1;
                            }
                            if(i<k&&a[i]==1)
                            {
                                judge=0;
                            }
                        }
                        
                        if(judge==0)break;
                        if(num==k)break;
                    }
                    if(judge==0)break;
                    if(num==k)break;
                }
                
                if(judge==1)break;
                
            }
            cout<<m<<endl;
        }
    }
    return 0;
}