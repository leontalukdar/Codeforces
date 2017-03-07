#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string s;
    int i,j,Count = 0,flag=0;
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            for(j=i-1;j>=0;j--)
            {
                if(s[i]==s[j])
                {
                    flag = 0;
                    break;
                }
                else
                    flag = 1;

            }
            if(flag == 1)
                Count++;
        }
    }
    cout<<Count<<endl;
    s.clear();
    return 0;
}
