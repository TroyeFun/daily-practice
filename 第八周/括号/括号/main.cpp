#include<iostream>
using namespace std;
int main()
{
    char c[2000];
    cin.get(c,2000);
    int i=0,j=0;
    int l=strlen(c);
    int judge=0;
    int sumz=0,sumy=0;
    for(i=0;i<l;i++)
    {
        if(c[i]=='(')sumz++;
        if(c[i]==')')sumy++;
        if(sumy>sumz){
            cout<<"mismatch";
            judge=1;
            break;
        }
    }
    if(sumz!=sumy&&judge==0)
    {
        judge=1;
        cout<<"mismatch"<<endl;
    }
    if(sumz==0&&sumy==0)cout<<"0,0";
    else if(judge==0)
    {
        sumz=0;
        sumy=0;
        int a[500][3]={0};
        int index=0;
        
        for(i=0;i<l;i++)
        {
            if(c[i]=='('){
                sumz++;
                for(j=i+1;j<l;j++)
                {
                    if(c[j]=='(')sumz++;
                    if(c[j]==')')sumy++;
                    if(sumz==sumy)
                    {
                        a[index][0]=i+1;
                        a[index][1]=j+1;
                        a[index][2]=j-i;
                        index++;
                        break;
                    }
                }
            }
        }
        int sum=0;
        for(j=0;;j++)
        {
            for(i=0;i<index;i++)
            {
                if(a[i][2]==j)
                {
                    cout<<a[i][0]<<','<<a[i][1]<<endl;
                    sum++;
                }
            }
            if(sum==index)break;
        }
    }
    return 0;
    
}
