#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Case;
    string s;
    cin>>Case;
    for(int i=0;i<Case;i++)
    {
        cin>>s;
        if(s.length()<=10)
            cout<<s<<endl;
        else
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        s.clear();
    }
    return 0;
}
