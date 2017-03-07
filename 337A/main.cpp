#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,maxi = 100000000;
    cin>>n>>m;
    int ar[101]={0};
    for(int i=0;i<m;i++)
        cin>>ar[i];
    sort(ar,ar+m);
    for(int i=0;i<m-n+1;i++)
    {
        if(maxi>ar[i+n-1]-ar[i])
        {
            maxi=ar[i+n-1]-ar[i];
        }
    }
    cout<<maxi<<endl;
    return 0;
}
