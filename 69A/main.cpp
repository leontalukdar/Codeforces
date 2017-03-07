#include <iostream>

using namespace std;

int main()
{
    int n,countx,county,countz;
    countx=county=countz=0;
    int x[101]={0};
    int y[101]={0};
    int z[101]={0};

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }

    for(int i=0;i<n;i++)
    {
        countx += x[i];
        county += y[i];
        countz += z[i];
    }

    if(countx == 0 && county == 0 && countz == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
