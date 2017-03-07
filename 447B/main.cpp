#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int ar[26];
    int n,maxi=0;
    int64_t res=0;
    cin>>s;
    cin>>n;
    for(int i=0;i<26;i++)
    {
        cin>>ar[i];
        if(maxi<ar[i])
            maxi=ar[i];
    }
    for(int i=0;i<s.length();i++)
    {
        res += ((i+1)*ar[s[i]-97]);
    }
    for(int i=0,j=s.length()+1;i<n;i++,j++)
    {
        res += (j*maxi);
    }
    cout<<res<<endl;
    return 0;
}
