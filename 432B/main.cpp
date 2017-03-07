#include <iostream>

using namespace std;

int main()
{
    int x[100001],y[100001],temp[100001]={0};
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
        temp[x[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<((n-1)+temp[y[i]])<<" "<<(n-1)-temp[y[i]]<<endl;
    }
    return 0;
}
