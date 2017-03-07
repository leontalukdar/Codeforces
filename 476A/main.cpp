#include <iostream>

using namespace std;

int main()
{
    int n,m,temp,res;
    cin>>n>>m;
    temp = (n+1)/2;
    res = (temp+m-1)/m*m;
    if(res>n)
        cout<<-1<<endl;
    else
        cout<<res<<endl;
    return 0;
}
