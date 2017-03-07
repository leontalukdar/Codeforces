#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

#define ll long long int

using namespace std;

int main()
{
    ll n,k,countall=0,temp1,temp2,hold;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<s.length();i++)
    {
        temp1='z'-s[i];
        temp2=s[i]-'a';
        if(temp1>temp2)
        {
            countall+=temp1;
            s[i]='z';
            hold=i;
        }
        else
        {
            countall+=temp2;
            s[i]='a';
            hold=i;
        }
        if(countall>=k)
            break;
    }
    if(countall<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(s[hold]=='a')
    {
        s[hold]='a'+(countall-k);
    }
    else
        s[hold]='z'-(countall-k);
    cout<<s<<endl;
    return 0;
}
