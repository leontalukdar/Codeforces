#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    int flag = 0;
    string s;
    getline(cin,s);
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            for(int j=i+2; j<l;j++)
            {
                if(s[j]=='B' && s[j+1]=='A')
                {

                    flag = 1;
                    break;
                }
                else
                    flag = 0;
            }
        }
        else if(s[i]=='B' && s[i+1]=='A')
        {
            for(int j=i+2; j<l;j++)
            {
                if(s[j]=='A' && s[j+1]=='B')
                {
                    flag = 1;
                    break;
                }
                else
                    flag = 0;
            }
        }
        if(flag == 1)
            break;
    }
    if(flag == 1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
