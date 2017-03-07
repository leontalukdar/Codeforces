#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int tree[100001],n,jump=1,dif=0,eat=1,total=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tree[i];
    }
    for(int i=0;i<n-1;i++)
    {
        dif=abs(tree[i+1]-tree[i]);
        total += jump+dif+eat;
    }
    cout<<total+tree[0]+1<<endl;
    return 0;
}
