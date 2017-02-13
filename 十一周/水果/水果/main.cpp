#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    char fruits[7][20]={"apples","bananas","peaches", "cherries", "pears", "oranges", "strawberries"};
    char change[20]="Brussels sprouts";
    char sent[1000];
    while(cin.getline(sent,1000))
    {
        bool judge=0;
        int i=0,j=0;
        for(i=0;i<strlen(sent)-1;i++)
        {
            for(j=0;j<7;j++)
            {
                if(sent[i]==fruits[j][0]&&sent[i+1]==fruits[j][1])
                {
                    for(int k=2;k<strlen(fruits[j]);k++)
                    {
                        if(sent[i+k]!=fruits[j][k])break;
                        if(k==strlen(fruits[j])-1)judge=1;
                        
                    }
                }
                if(judge==1)break;
            }
            if(judge==1)break;
        }
        if(judge==1)
        {
            for(int t=0;t<i;t++)
            {
                cout<<sent[t];
            }
            cout<<change;
            for(int t=i+strlen(fruits[j]);t<strlen(sent);t++)
                cout<<sent[t];
            cout<<endl;
            
        }
        else cout<<"You must not enjoy fruit."<<endl;
        
    }
}