#include<iostream>
using namespace std;
char num[1000];
int l;
int aim;
int toi(int start,int len)
{
    char temp[1000];
    for(int i=0;i<len;i++)
        temp[i]=num[start+i];
    temp[len]='\0';
    return atoi(temp);
}
int times=0;
int total=0;
struct BBrp
{
    int Brp[1000];
}Max,temp;
void match(int n,int index,int id)
{
    if(n==0)
    {
        int sum=0;
        temp.Brp[id]=l;
        for(int i=0;i<id;i++)
        {
            sum+=toi(temp.Brp[i],temp.Brp[i+1]-temp.Brp[i]);
        }
        
        if(sum<=aim&&sum>=total)
        {
            if(sum>total)
            {
                times=1;
                total=sum;
                Max=temp;
            }
            else
                times++;
        }
        temp.Brp[id]=0;
    }
    else
        for(int i=index;i<l;i++)
        {
            temp.Brp[id]=i;
            match(n-1,i+1,id+1);
            temp.Brp[id]=0;
            
        }
}
int main()
{
    Max.Brp[0]=0;
    while (cin>>aim)
    {
        total=0;
        getchar();
        cin.get(num,1000);
        l=strlen(num);
        if(aim==0&&num[0]=='0')
            break;
        else if(aim==atoi(num))
            cout<<aim<<' '<<num<<endl;
        else
        {
            int min=0;
            for(int i=0;i<strlen(num);i++)
                min+=num[i]-'0';
            if(min>aim)cout<<"error"<<endl;
            else
            {
                for(int i=l-1;i>=0;i--)
                {
                    match(i,1,1);
                }
                if(times>1)cout<<"rejected"<<endl;
                else
                {
                    cout<<total;
                    
                    for(int i=0;;i++)
                    {
                        if(Max.Brp[i]<l)
                        {
                            cout<<' ';
                            for(int j=Max.Brp[i];j<Max.Brp[i+1];j++)
                                cout<<num[j];
                        }
                        else
                        {
                            cout<<endl;
                            break;
                        }
                    }
                }
                
            }
        }
        
    }
}