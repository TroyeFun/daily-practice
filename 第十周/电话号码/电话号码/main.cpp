#include<iostream>
#include<math.h>
#include<iomanip>
#include<algorithm>
using namespace std;


int main()
{
    int num[100010]={0};
    char d[50];
    int n;
    cin>>n;
    char c;
    cin.get(c);
    
    int i=0;
    for(i=0;i<n;i++)
    {
        cin.getline(d,50);
        int j=1;
        for(int k=0;k<strlen(d);k++)
        {
            if(d[k]=='A'||d[k]=='B'||d[k]=='C'||d[k]=='2')
            {
                num[i]+=2*pow(10,(7-j));
                j++;
            }
            else if(d[k]=='D'||d[k]=='E'||d[k]=='F'||d[k]=='3')
            {
                num[i]+=3*pow(10,(7-j));
                j++;
            }
            else if(d[k]=='G'||d[k]=='H'||d[k]=='I'||d[k]=='4')
            {
                num[i]+=4*pow(10,(7-j));
                
                j++;
            }
            else if(d[k]=='J'||d[k]=='K'||d[k]=='L'||d[k]=='5')
            {
                num[i]+=5*pow(10,(7-j));
                
                j++;
            }
            else if(d[k]=='M'||d[k]=='N'||d[k]=='O'||d[k]=='6')
            {
                num[i]+=6*pow(10,(7-j));
                
                j++;
            }
            else if(d[k]=='P'||d[k]=='R'||d[k]=='S'||d[k]=='7')
            {
                num[i]+=7*pow(10,(7-j));
                j++;
            }
            else if(d[k]=='T'||d[k]=='U'||d[k]=='V'||d[k]=='8')
            {
                num[i]+=8*pow(10,(7-j));
                j++;
            }
            else if(d[k]=='W'||d[k]=='X'||d[k]=='Y'||d[k]=='9')
            {
                num[i]+=9*pow(10,(7-j));
                
                j++;
            }
            else if(d[k]=='0')
            {
                j++;
                
            }
            else if(d[k]=='1')
            {
                num[i]+=1*pow(10,(7-j));
                j++;
            }
            
            if(j==8)continue;
        }
        
    }
    sort(num,num+n);
    int j=0;
    i=0;
    int judge=0;
    while(i<n)
    {
        i=j;
        int count=1;
        for(j=i+1;j<n;j++)
        {
            if(num[j]==num[i])
            {
                count++;
            }
            else
                break;
        }
        if(count>1){
            cout<<num[i]/1000000<<num[i]/100000%10<<num[i]/10000%10<<'-'<<num[i]/1000%10<<num[i]/100%10<<num[i]/10%10<<num[i]%10<<' '<<count<<endl;//可以用 cout<<setw(3)<<setfill('0')<<num[i]/10000<<'-'<<setw(4)<<num[i]%10000<<' '<<count<<endl;  来代替
            judge=1;
        }
    }
    if(judge==0)cout<<"No duplicates.";
    
    
}
