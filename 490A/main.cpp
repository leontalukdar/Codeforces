#include <iostream>
using namespace std;
int n,V[3],a,X[3][5001],i,p;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
	{
		cin>>a;
		X[a-1][V[a-1]++]=i;
    }
    p=min(V[0],min(V[1],V[2]));
	cout<<p<<"\n";
    for(i=0;i<p;i++)
	{
      cout<<X[0][i]<<" "<<X[1][i]<<" "<<X[2][i]<<"\n";
    }
    return 0;
}
