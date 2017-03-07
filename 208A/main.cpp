#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s,s1;
    s1 = "                                                                                                                                                                                                                                                                                           ";
    cin>>s;
    unsigned int i,j;
    for(i=0,j=0;i<s.length();i++,j++)
    {
        while(s[i]=='W' && s[i+1] == 'U' && s[i+2]=='B')
        {
            i+=3;
            s1[j] = ' ';
            j++;
        }
        s1[j]=s[i];
    }
    s1[j] = '\0';
    s1.erase(0,s1.find_first_not_of(' '));
    s1.erase(s1.find_first_of('\0'),s1.find_last_of(' '));
    cout<<s1<<endl;
    return 0;
}
