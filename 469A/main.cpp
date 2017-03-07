#include <iostream>

using namespace std;

int main()
{
    int n,p,q,pq=0,x[101],y[101];
    x[101]={0};
    y[101]={0};
    cin>>n;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>x[i];
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>y[i];
    }
    pq = p+q;
    if(pq<n)
        cout<<"Oh, my keyboard!"<<endl;
    else
    {
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                if(x[i]==y[j])
                    pq--;
            }
        }
        if(pq == n)
            cout<<"I become the guy."<<endl;
        else
            cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
