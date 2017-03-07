#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    int n,Countf=0,Count,one,flag=1;
    string s;
    string s2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        Count=one=0;
        cin>>s;
        Count = count(s.begin(),s.end(),'0');
        Countf += Count;
        one = count(s.begin(),s.end(),'1');
        if(Count==1 && s.length()==1)
            flag=0;
        if((Count+one)!=s.length()||one>1)
        {
            s2=s;
        }
    }
    if(flag == 0)
        cout<<0<<endl;
    else
    {
        cout<<s2;
        for(int i=0;i<Countf;i++)
            cout<<'0';
        cout<<endl;
    }
}
