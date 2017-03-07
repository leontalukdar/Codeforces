#include <iostream>

using namespace std;

int main()
{
    int flag,w;
    cin>>w;
    if(w%2 == 0 && w>2)
        flag = 1;
    else
        flag = 0;
    if(flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
