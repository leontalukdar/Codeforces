#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=31;i>=0;i--)
    {
        if(n>>i&1)
            cout<<i+1<<" ";
    }
    cout<<endl;
    return 0;
}
