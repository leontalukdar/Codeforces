#include <iostream>

using namespace std;

int main()
{
    int na,nb,A[100001],B[100000],k,m;
    cin>>na>>nb>>k>>m;
    for(int i=0;i<na;i++)
        cin>>A[i];
    for(int i=0;i<nb;i++)
        cin>>B[i];
    if(A[k-1]<B[nb-m])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
