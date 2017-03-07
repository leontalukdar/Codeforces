#include <iostream>
#include <string>

using namespace std;

int main()
{
    int flag=0,i,j=-1;
    string s;
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        if((s[i]-48)%2==0)
        {
            j=i;
            if((s[i]-48)<(s[s.length()-1]-48))
            {
                swap(s[i],s[s.length()-1]);
                cout<<s<<endl;
                return 0;
            }
        }
    }
    if(flag==0&&j!=-1)
    {
        swap(s[j],s[s.length()-1]);
        cout<<s<<endl;
        return 0;
    }
    else
        cout<<-1<<endl;
    return 0;
}
