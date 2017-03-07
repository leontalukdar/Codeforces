#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int keep[26]={0};
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        keep[s[i]-'a']++;
    }
    int odd=0;
    for(int i=0;i<26;i++)
    {
        if(keep[i]%2!=0)
            odd++;
    }
    if(odd==0)
        cout<<"First"<<endl;
    else if(odd==1)
        cout<<"First"<<endl;
    else
    {
        if(odd%2==0)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }
    return 0;
}
