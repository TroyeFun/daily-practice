
#include<iostream>
using namespace std;
int main()
{
    char s[400]={'\0'},s1[20]={'\0'},s2[20]={'\0'};
    cin.getline(s,400,',');
    cin.getline(s1,20,',');
    cin.getline(s2,20);
    int left=0,right=0;
    int l=strlen(s),l1=strlen(s1),l2=strlen(s2);
    int j=0,k=0;
    for(left=0;left<l;left++)
    {
        
        if(s[left]==s1[0])
        {
            j=1;
            while(j<l1)
            {
                if(s[left+j]!=s1[j])
                    break;
                j++;
            }
            if(j=l1)break;
        }
        
    }
    if(j!=l1)cout<<"-1";
    else {
        for(right=l-1;right>=0;right--)
        {
            if(s[right]==s2[l2-1])
            {
                k=1;
                while(k<l2)
                {
                    if(s[right-k]!=s2[l2-1-k])
                        break;
                    k++;
                }
                if(k=l2)break;
            }
            
        }
        if(k!=l2)cout<<"-1";
        else
        {
            if(right-l2+1<=left+l1-1)cout<<"-1";
            else
                cout<<right-left+1-l1-l2;
        }
    }
    
}


