#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s,temp1,temp2;
    unsigned int n,i,len1,len2,len,flag = 0;
    getline(cin,s);
    cin>>n;
    len1=len2=0;
    len = s.length()/n;
    for(i=0;i<n;i++)
    {
        if(s.length() % n != 0)
        {
            flag = 0;
            break;
        }
        len1 = len2;
        len2 = len2 + len;
        temp1.assign(s,len1,len2);
        temp2.assign(s,len1,len2);
        reverse(temp1.begin(),temp1.end());
        if(temp1.compare(temp2)==0)
        {
            flag = 1;
            temp1.clear();
            temp2.clear();
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag == 1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
