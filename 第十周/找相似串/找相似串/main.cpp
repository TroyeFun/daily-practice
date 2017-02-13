#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int simi[201]={0};
char origin[502]={'\0'};
int Count=0;
void compare(int start1,int start2,char given[],int t)
{
    
    for(int i=start1;i<strlen(origin);i++)
    {
        for(int j=start2;j<strlen(given);j++)
        {
            if(origin[i]==given[j])
            {
                Count++;
                
                if(i==strlen(origin)-1||j==strlen(given)-1)
                {
                    simi[t]=(Count>simi[t])?Count:simi[t];
                    Count=0;
                }
                compare(i+1,j+1,given,t);
                
                
            }
            else if(i==strlen(origin)-1&&j==strlen(given)-1)
            {
                simi[t]=(Count>simi[t])?Count:simi[t];
                Count=0;
            }
        }
    }
}
int main()
{
    cin>>origin;
    int n;
    cin>>n;
    int min=100000;
    char given[201][501];
    for(int i=0;i<n;i++)
    {
        
        cin>>given[i];
        compare(0,0,given[i],i);
        min=(int(strlen(origin)+strlen(given[i]))-2*simi[i]<min)?int((strlen(origin)+strlen(given[i])-2*simi[i])):min;
        
    }
    for(int i=0;i<n;i++)
    {
        if(int(strlen(origin)+strlen(given[i]))-2*simi[i]==min)
            cout<<given[i]<<"  "<<min<<" "<<simi[i]<<endl;
    }
}/*
  case 1:abcde||flkjl||kjsdl||kjglk||dsf
  6
  
  acdef||glsdk||jflds||jgldg||lgg
  ajgjghlsdjlsdjgldlkggjk   14
  lkjljsdlkgldgjldkglgdgfj   7
  kjkdl;gkldgk;lgk;lgkglk  10
  abcdefdglgdslkgds;k;gfg
  
  std
  abcdghtkjkfjksdjkdsjkg
  
  
  abcdeflkjlkjsdlkjglkdsf
  */