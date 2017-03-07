#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,ar[3001],staircount,flag=0;
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>ar[i];
    sort(ar,ar+m);
    if(ar[0]==1 || ar[m-1]==n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<m-1;i++)
    {
        if(flag==0)
            staircount=0;
        if(ar[i]==ar[i+1]-1)
        {
            staircount++;
            flag=1;
        }
        else
            flag=0;
        if(staircount>1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
