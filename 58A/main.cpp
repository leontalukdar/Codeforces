#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    unsigned int i;
    int flag=0;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='h')
        {
            for(; i<s.length(); i++)
            {
                if(s[i]=='e')
                {
                    for(; i<s.length(); i++)
                    {
                        if(s[i]=='l')
                        {
                            for(; i<s.length(); i++)
                            {
                                if(s[i+1]=='l')
                                {
                                    for(i=i+1; i<s.length(); i++)
                                    {
                                        if(s[i]=='o')
                                        {
                                            flag = 1;
                                            break;
                                        }
                                    }
                                }
                                if(flag == 1)
                                    break;
                            }
                        }
                        if(flag == 1)
                            break;
                    }
                }
                if(flag == 1)
                    break;
            }
        }
        if(flag == 1)
            break;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
