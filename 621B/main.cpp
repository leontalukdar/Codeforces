#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

int ar2[1001][1001];

int main()
{
    map<int,int> map1;
    map<int,int> map2;
    int n,x,y,res=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        res+=map1[x+y]++;
        res+=map2[x-y]++;
    }
    cout<<res<<endl;
    return 0;
}
