#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,dis;
    cin>>n;
    long int ar[n+1];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    dis = ar[n/2]-ar[0];
    cout<<dis<<endl;
    return 0;
}
