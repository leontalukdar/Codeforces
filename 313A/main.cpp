#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,s1="                                      ";
    int i,j;
    cin>>s;
    if(s[0]=='-')
    {
        if(s[s.length()-2]<=s[s.length()-1])
        {
            for(i=0,j=0;i<s.length();i++,j++)
            {
                s1[j]=s[i];
                if(i==s.length()-2)
                    i++;
            }
            s1[j]='\0';
        }
        else
        {
            for(i=0,j=0;i<s.length();i++,j++)
            {
                if(i==s.length()-2)
                    i++;
                s1[j]=s[i];
            }
            s1[j]='\0';
        }
        if(s1[1]=='0')
            cout<<0<<endl;
        else
            for(i=0;s1[i]!='\0';i++)
                cout<<s1[i];
            cout<<endl;
    }
    else
        cout<<s<<endl;
    return 0;
}
