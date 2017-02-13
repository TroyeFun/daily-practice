//此类题目，如果通过循环不断判断，计算量非常大。解决方式是建立一个数组来标记输进去过的数，这样就可以去掉不必要的计算（case 15原来需900+ms，这样做只花了8ms
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[5000];
    int c[100000]={0};
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        c[a[i]]=1;
    }
    sort(a,a+n);
    int cha=-1;
    int sum=2;
    int b[5000]={0};
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            int con=2;
            
            if(a[j]!=a[i]){
                for(;;){
                    if(c[(con-1)*(a[j]-a[i])+a[j]]==1)con++;
                    else break;
                }
            }
            else
            {
                for(int k=j+1;k<n;k++)
                {
                    if(a[k]==a[j])con++;
                    else break;
                }
            }
            
            if(con>sum||(a[j]-a[i]>cha&&con==sum)||(a[j]-a[i]==cha&&con==sum&&a[i]>b[0]))
            {
                sum=con;
                cha=a[j]-a[i];
                b[0]=a[i];
                b[1]=a[j];
                for(int t=2;t<con;t++)
                {
                    b[t]=a[j]+(t-1)*(a[j]-a[i]);
                }
            }
        }
        
    }
    if(sum==2)cout<<"NO";
    else
    {
        cout<<b[0];
        for(int i=1;i<sum;i++)
        {
            cout<<","<<b[i];
        }
    }
}
/*以下是原来的做法
 #include<iostream>
 #include<algorithm>
 using namespace std;
 int main()
 {
 int n;
 cin>>n;
 int a[5000];
 for(int i=0;i<n;i++)
 cin>>a[i];
 sort(a,a+n);
 int cha=-1;
 int sum=2;
 int b[5000]={0};
 for(int i=0;i<n-2;i++)
 {
 for(int j=i+1;j<n-1;j++)
 {
 int con=2;
 for(int k=j+1;k<n;k++)   //这个循环增加了很多不必要的判断
 {
 if(a[k]-a[j]>(a[j]-a[i])*(con-1))
 {
 break;
 }
 if(a[k]-a[j]==(a[j]-a[i])*(con-1))
 {
 con++;
 }
 
 }
 if(con>sum||(a[j]-a[i]>cha&&con==sum)||(a[j]-a[i]==cha&&con==sum&&a[i]>b[0]))
 {
 sum=con;
 cha=a[j]-a[i];
 b[0]=a[i];
 b[1]=a[j];
 for(int t=2;t<con;t++)
 {
 b[t]=a[j]+(t-1)*(a[j]-a[i]);
 }
 }
 }
 
 }
 if(sum==2)cout<<"NO";
 else
 {
 cout<<b[0];
 for(int i=1;i<sum;i++)
 {
 cout<<","<<b[i];
 }
 }
 }
 */

