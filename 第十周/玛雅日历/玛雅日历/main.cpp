#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int monthday(char c[])
{
    return c[0]+c[1]+c[2]+c[3]+c[4]+c[5];
}
int main()
{
    int n;
    cin>>n;
    int i=0;
    int  Haab[19]={'p'+'o'+'p','n'+'o','z'+'i'+'p','z'+'o'+'t'+'z','t'+'z'+'e'+'c','x'+'u'+'l','y'+'o'+'x'+'k'+'i'+'n','m'+'o'+'l','c'+'h'+'e'+'n','y'+'a'+'x','z'+'a'+'c','c'+'e'+'h','m'+'a'+'c','k'+'a'+'n'+'k'+'i'+'n','m'+'u'+'a'+'n','p'+'a'+'x','k'+'o'+'y'+'a'+'b','c'+'u'+'m'+'h'+'u','u'+'a'+'y'+'e'+'t'};
    char Tzo[21][10]={"ahau","imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
    int Haab2[10000]={0};
    for(i=0;i<19;i++)
    {
        Haab2[Haab[i]]=20*i;
    }
    cout<<n<<endl;
    for(i=0;i<n;i++)
    {
        int date=0,year=0;
        char month[10]={'\0'},c;
        cin>>date>>c>>month>>year;
        int days=0;
        days+=Haab2[monthday(month)];
        days+=year*365;
        days+=date+1;
        cout<<((days%13==0)?13:days%13)<<' '<<Tzo[days%20]<<' '<<((days%260==0)?(days/260-1):(days/260))<<endl;
        
    }
    return 0;
    
}