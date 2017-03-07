#include <iostream>

using namespace std;

int main()
{
    int n,d,sum=0,total,x;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum += x;
    }
    total = (n-1)*10 + sum;
    if(total>d)
        cout<<-1<<endl;
    else
    {
        cout<<(d-sum)/5<<endl;
    }
    return 0;
}
