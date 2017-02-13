//简单略缩语判断(注意中间cin.get(e)把’\n’吃掉)(因为用了cin.get(e),所以后面输入d的时候不能用cin.getline而是cin.get)
#include<iostream>
using namespace std;
int main()
{
    int n;
    int i=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        char c[100]={'\0'},d[300]={'\0'};
        char e;
        cin.get(e);
        cin.getline(c,100,':');
        cin.get(d,300,'\n');
        int l1=strlen(c);
        int l2=strlen(d);
        if(l1>=l2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int j=0;int k=-1;int judge=0;
            for(j=0;j<l1;j++)
            {
                
                judge=0;
                for(k=k+1;k<l2;k++)
                {
                    
                    if(d[k]==c[j])
                    {
                        judge=1;
                        break;
                    }
                }
                if(judge==0)break;
            }
            if(judge==0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            
        }
    }
    
}


