#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    char dic[100][21];
    char sen[1001];
    for(int i=0;i<m;i++)
        cin>>dic[i];
    int len=strlen(dic[0]);
    for(int i=0;i<n;i++)
    {
        cin>>sen;
        bool judge=0;
        for(int j=0;j<strlen(sen);j+=len)
        {
            bool r=0;
            char word[21]={'\0'};
            for(int k=0;k<len;k++)
                word[k]=sen[j+k];
            for(int k=0;k<m;k++)
                if(strcmp(word,dic[k])==0)
                {
                    r=1;break;
                }
            if(!r)
            {
                judge=1;
                break;
            }
        }
        if(judge)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}