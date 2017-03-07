#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    int countpair=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            int x=0;
            int y=0;
            for(int k=i;k<=j;k++)
            {
                if(s[k]=='U')x++;
                if(s[k]=='D')x--;
                if(s[k]=='R')y++;
                if(s[k]=='L')y--;
            }
            if(x==0 && y==0)
                countpair++;
        }
    }
    cout<<countpair<<endl;
    return 0;
}
