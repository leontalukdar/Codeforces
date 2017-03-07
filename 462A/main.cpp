#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s[101];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]!=s[n-i-1][n-j-1])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
